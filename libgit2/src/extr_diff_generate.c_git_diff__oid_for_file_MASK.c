
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int git_oid ;
typedef scalar_t__ git_off_t ;
struct TYPE_4__ {char* path; scalar_t__ file_size; int mode; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_diff ;
typedef int entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,TYPE_1__*,int ,int *) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

int FUNC_3(
 git_oid *VAR_2,
 git_diff *VAR_3,
 const char *VAR_4,
 uint16_t VAR_5,
 git_off_t VAR_6)
{
 git_index_entry VAR_7;

 if (VAR_6 < 0 || VAR_6 > VAR_1) {
  FUNC_1(VAR_0, "file size overflow (for 32-bits) on '%s'", VAR_4);
  return -1;
 }

 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.mode = VAR_5;
 VAR_7.file_size = (uint32_t)VAR_6;
 VAR_7.path = (char *)VAR_4;

 return FUNC_0(VAR_2, VAR_3, &VAR_7, VAR_5, ((void*)0));
}
