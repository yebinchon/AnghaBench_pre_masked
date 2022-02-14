
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stat {scalar_t__ st_size; int st_mode; } ;
struct git_pack_header {scalar_t__ hdr_signature; int hdr_entries; int hdr_version; } ;
struct TYPE_8__ {int fd; scalar_t__ size; } ;
struct TYPE_6__ {int len; scalar_t__ data; } ;
struct git_pack_file {int index_version; int pack_fd; scalar_t__ num_objects; int lock; TYPE_5__ mwf; int pack_name; TYPE_1__ index_map; } ;
typedef int hdr ;
struct TYPE_7__ {struct git_pack_header* id; } ;
typedef TYPE_2__ git_oid ;
typedef scalar_t__ git_off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (char*,int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int,struct stat*) ;
 int FUNC_13 (int,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (int,struct git_pack_header*,int) ;
 scalar_t__ FUNC_15 (struct git_pack_file*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int FUNC_18(struct git_pack_file *VAR_8)
{
 struct stat VAR_9;
 struct git_pack_header VAR_10;
 git_oid VAR_11;
 unsigned char *VAR_12;

 if (VAR_8->index_version == -1 && FUNC_15(VAR_8) < 0)
  return FUNC_7("failed to open packfile", ((void*)0), 0);


 if (FUNC_4(&VAR_8->lock) < 0)
  return FUNC_17("failed to get lock for open");

 if (VAR_8->mwf.fd >= 0) {
  FUNC_5(&VAR_8->lock);
  return 0;
 }


 VAR_8->mwf.fd = FUNC_3(VAR_8->pack_name);
 if (VAR_8->mwf.fd < 0)
  goto cleanup;

 if (FUNC_12(VAR_8->mwf.fd, &VAR_9) < 0 ||
  FUNC_6(&VAR_8->mwf) < 0)
  goto cleanup;


 if (!VAR_8->mwf.size) {
  if (!FUNC_0(VAR_9.st_mode))
   goto cleanup;
  VAR_8->mwf.size = (git_off_t)VAR_9.st_size;
 } else if (VAR_8->mwf.size != VAR_9.st_size)
  goto cleanup;
 if (FUNC_14(VAR_8->mwf.fd, &VAR_10, sizeof(VAR_10)) < 0 ||
  VAR_10.hdr_signature != FUNC_9(VAR_5) ||
  !FUNC_16(VAR_10.hdr_version))
  goto cleanup;


 if (VAR_8->num_objects != FUNC_10(VAR_10.hdr_entries) ||
  FUNC_13(VAR_8->mwf.fd, VAR_8->mwf.size - VAR_4, VAR_6) == -1 ||
  FUNC_14(VAR_8->mwf.fd, VAR_11, VAR_4) < 0)
  goto cleanup;

 VAR_12 = ((unsigned char *)VAR_8->index_map.data) + VAR_8->index_map.len - 40;

 if (FUNC_8(&VAR_11, (git_oid *)VAR_12) != 0)
  goto cleanup;

 FUNC_5(&VAR_8->lock);
 return 0;

cleanup:
 FUNC_2(VAR_3, "invalid packfile '%s'", VAR_8->pack_name);

 if (VAR_8->mwf.fd >= 0)
  FUNC_11(VAR_8->mwf.fd);
 VAR_8->mwf.fd = -1;

 FUNC_5(&VAR_8->lock);

 return -1;
}
