
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* datatype; char* cname; int lbl; } ;
typedef TYPE_1__ GDefMetric ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,TYPE_1__,int) ;

__attribute__((used)) static void
FUNC_3 (FILE * VAR_2, int VAR_3)
{
  GDefMetric VAR_4 = {
    .lbl = VAR_1,
    .datatype = "numeric",
    .cname = "black"
  };
  FUNC_1 (VAR_2, VAR_0, VAR_3);
  FUNC_2 (VAR_2, VAR_4, VAR_3);
  FUNC_0 (VAR_2, VAR_3, 0);
}
