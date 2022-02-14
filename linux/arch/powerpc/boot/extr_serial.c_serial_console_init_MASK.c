
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int edit_cmdline; TYPE_1__* data; int close; int write; int open; } ;
struct TYPE_8__ {scalar_t__ getc; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (void*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (void*,char*) ;
 int FUNC_2 (void*,TYPE_1__*) ;
 int FUNC_3 (void*,TYPE_1__*) ;
 int FUNC_4 (void*,TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (void*,TYPE_1__*) ;

int FUNC_7(void)
{
 void *VAR_6;
 int VAR_7 = -1;

 VAR_6 = FUNC_5();
 if (VAR_6 == ((void*)0))
  goto err_out;

 if (FUNC_1(VAR_6, "ns16550") ||
     FUNC_1(VAR_6, "pnpPNP,501"))
  VAR_7 = FUNC_3(VAR_6, &VAR_1);
 if (!VAR_7) {
  VAR_0.open = VAR_4;
  VAR_0.write = VAR_5;
  VAR_0.close = VAR_2;
  VAR_0.data = &VAR_1;

  if (VAR_1.getc)
   VAR_0.edit_cmdline = VAR_3;

  return 0;
 }
err_out:
 return -1;
}
