
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct index_state {int dummy; } ;
typedef int mmfile_t ;
struct TYPE_3__ {unsigned long size; void* ptr; } ;
typedef TYPE_1__ mmbuffer_t ;


 int FUNC_0 (TYPE_1__*,char const*,int *,int *,int *,char*,int *,char*,struct index_state*,int *) ;

__attribute__((used)) static void *FUNC_1(struct index_state *VAR_0,
     const char *VAR_1,
     mmfile_t *VAR_2,
     mmfile_t *VAR_3,
     mmfile_t *VAR_4,
     unsigned long *VAR_5)
{
 int VAR_6;
 mmbuffer_t VAR_7;







 VAR_6 = FUNC_0(&VAR_7, VAR_1, VAR_2, ((void*)0),
    VAR_3, ".our", VAR_4, ".their",
    VAR_0, ((void*)0));
 if (VAR_6 < 0)
  return ((void*)0);

 *VAR_5 = VAR_7.size;
 return VAR_7.ptr;
}
