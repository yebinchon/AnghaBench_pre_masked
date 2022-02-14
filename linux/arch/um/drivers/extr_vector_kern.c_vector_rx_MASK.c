
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_private {int options; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct vector_private*) ;
 int FUNC_3 (struct vector_private*) ;

__attribute__((used)) static void FUNC_4(struct vector_private *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 if ((VAR_2->options & VAR_1) > 0)
  while (((VAR_3 = FUNC_3(VAR_2)) > 0) && (VAR_4 < VAR_0))
   VAR_4++;
 else
  while (((VAR_3 = FUNC_2(VAR_2)) > 0) && (VAR_4 < VAR_0))
   VAR_4++;
 if ((VAR_3 != 0) && FUNC_0())
  FUNC_1(VAR_2->dev, "vector_rx: error(%d)\n", VAR_3);
 if (VAR_4 == VAR_0)
  FUNC_1(VAR_2->dev, "vector_rx: device stuck, remote end may have closed the connection\n");
}
