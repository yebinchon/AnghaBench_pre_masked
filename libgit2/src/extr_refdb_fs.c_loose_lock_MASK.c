
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* gitpath; char* commonpath; scalar_t__ fsync; int repo; } ;
typedef TYPE_1__ refdb_fs_backend ;
typedef int git_filebuf ;
struct TYPE_8__ {int ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char const*,char const*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (char const*,char const*,int ) ;
 int FUNC_6 (int ,char const*,int ,int ) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(git_filebuf *VAR_10, refdb_fs_backend *VAR_11, const char *VAR_12)
{
 int VAR_13, VAR_14;
 git_buf VAR_15 = VAR_0;
 const char *VAR_16;

 FUNC_0(VAR_10 && VAR_11 && VAR_12);

 if (!FUNC_6(VAR_11->repo, VAR_12, 0, VAR_7)) {
  FUNC_3(VAR_3, "invalid reference name '%s'", VAR_12);
  return VAR_2;
 }

 if (FUNC_7(VAR_12))
  VAR_16 = VAR_11->gitpath;
 else
  VAR_16 = VAR_11->commonpath;




 if ((VAR_13 = FUNC_5(VAR_12, VAR_16, VAR_9)) < 0)
  return VAR_13;

 if (FUNC_2(&VAR_15, VAR_16, VAR_12) < 0)
  return -1;

 VAR_14 = VAR_5;
 if (VAR_11->fsync)
  VAR_14 |= VAR_6;

 VAR_13 = FUNC_4(VAR_10, VAR_15.ptr, VAR_14, VAR_8);

 if (VAR_13 == VAR_1)
  FUNC_3(VAR_4, "cannot lock ref '%s', there are refs beneath that folder", VAR_12);

 FUNC_1(&VAR_15);
 return VAR_13;
}
