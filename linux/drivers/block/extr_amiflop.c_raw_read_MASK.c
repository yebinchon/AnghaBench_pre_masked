
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int adkcon; int dsklen; int * dskptr; int dsksync; } ;
struct TYPE_5__ {TYPE_1__* type; } ;
struct TYPE_4__ {int read_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 () ;
 TYPE_2__* VAR_9 ;
 int FUNC_5 (int ,int) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_6(int VAR_11)
{
 VAR_11&=3;
 FUNC_3(VAR_11);
 FUNC_5(VAR_10, !VAR_6);
 FUNC_2(VAR_11);

 VAR_7.adkcon = VAR_1;
 VAR_7.adkcon = VAR_2|VAR_3|VAR_0;

 VAR_7.dsksync = VAR_5;

 VAR_7.dsklen = 0;
 VAR_7.dskptr = (u_char *)FUNC_0((u_char *)VAR_8);
 VAR_7.dsklen = VAR_9[VAR_11].type->read_size/sizeof(short) | VAR_4;
 VAR_7.dsklen = VAR_9[VAR_11].type->read_size/sizeof(short) | VAR_4;

 VAR_6 = 1;

 FUNC_5(VAR_10, !VAR_6);

 VAR_7.dsklen = 0;
 FUNC_1(VAR_11);
 FUNC_4();
}
