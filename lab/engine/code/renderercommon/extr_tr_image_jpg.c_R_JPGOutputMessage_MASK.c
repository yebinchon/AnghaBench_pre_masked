
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* j_common_ptr ;
struct TYPE_8__ {int (* Printf ) (int ,char*,char*) ;} ;
struct TYPE_7__ {TYPE_1__* err; } ;
struct TYPE_6__ {int (* format_message ) (TYPE_2__*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_2(j_common_ptr VAR_3)
{
  char VAR_4[VAR_0];


  (*VAR_3->err->format_message) (VAR_3, VAR_4);


  VAR_2.Printf(VAR_1, "%s\n", VAR_4);
}
