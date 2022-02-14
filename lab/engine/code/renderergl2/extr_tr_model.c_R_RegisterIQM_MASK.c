
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qhandle_t ;
typedef int qboolean ;
struct TYPE_5__ {int index; void* type; } ;
typedef TYPE_1__ model_t ;
struct TYPE_6__ {int (* FS_ReadFile ) (char const*,void**) ;int (* Printf ) (int ,char*,char const*) ;int (* FS_FreeFile ) (void*) ;} ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned int*,int,char const*) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (char const*,void**) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int ,char*,char const*) ;

qhandle_t FUNC_4(const char *VAR_4, model_t *VAR_5)
{
 union {
  unsigned *u;
  void *v;
 } VAR_6;
 qboolean VAR_7 = VAR_2;
 int VAR_8;

 VAR_8 = VAR_3.FS_ReadFile(VAR_4, (void **) &VAR_6.v);
 if(!VAR_6.u)
 {
  VAR_5->type = VAR_0;
  return 0;
 }

 VAR_7 = FUNC_0(VAR_5, VAR_6.u, VAR_8, VAR_4);

 VAR_3.FS_FreeFile (VAR_6.v);

 if(!VAR_7)
 {
  VAR_3.Printf(VAR_1,"R_RegisterIQM: couldn't load iqm file %s\n", VAR_4);
  VAR_5->type = VAR_0;
  return 0;
 }

 return VAR_5->index;
}
