
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct git_pack_header {scalar_t__ hdr_signature; int hdr_version; } ;
struct TYPE_5__ {int fd; } ;
struct git_pack_file {TYPE_1__ mwf; } ;
struct TYPE_6__ {int data; } ;
typedef TYPE_2__ git_map ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct git_pack_header*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct git_pack_header *VAR_4, struct git_pack_file *VAR_5)
{
 int VAR_6;
 git_map VAR_7;

 if ((VAR_6 = FUNC_3(&VAR_7, sizeof(*VAR_4), VAR_2, VAR_1, VAR_5->mwf.fd, 0)) < 0)
  return VAR_6;

 FUNC_1(VAR_4, VAR_7.data, sizeof(*VAR_4));
 FUNC_4(&VAR_7);


 if (VAR_4->hdr_signature != FUNC_2(VAR_3)) {
  FUNC_0(VAR_0, "wrong pack signature");
  return -1;
 }

 if (!FUNC_5(VAR_4->hdr_version)) {
  FUNC_0(VAR_0, "wrong pack version");
  return -1;
 }

 return 0;
}
