
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* sysname; char* release; char* version; char* machine; } ;
typedef TYPE_1__ uv_utsname_t ;
struct utsname {char* sysname; char* version; char* release; char* machine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int,char*,char*,char*) ;
 int FUNC_2 (struct utsname*) ;
 int FUNC_3 (char*,char*,int) ;

int FUNC_4(uv_utsname_t* VAR_3) {
  struct utsname VAR_4;
  int VAR_5;

  if (VAR_3 == ((void*)0))
    return VAR_1;

  if (FUNC_2(&VAR_4) == -1) {
    VAR_5 = FUNC_0(VAR_2);
    goto error;
  }

  VAR_5 = FUNC_3(VAR_3->sysname, VAR_4.sysname, sizeof(VAR_3->sysname));
  if (VAR_5 == VAR_0)
    goto error;
  VAR_5 = FUNC_3(VAR_3->release, VAR_4.release, sizeof(VAR_3->release));
  if (VAR_5 == VAR_0)
    goto error;


  VAR_5 = FUNC_3(VAR_3->version, VAR_4.version, sizeof(VAR_3->version));
  if (VAR_5 == VAR_0)
    goto error;




  VAR_5 = FUNC_3(VAR_3->machine, VAR_4.machine, sizeof(VAR_3->machine));


  if (VAR_5 == VAR_0)
    goto error;

  return 0;

error:
  VAR_3->sysname[0] = '\0';
  VAR_3->release[0] = '\0';
  VAR_3->version[0] = '\0';
  VAR_3->machine[0] = '\0';
  return VAR_5;
}
