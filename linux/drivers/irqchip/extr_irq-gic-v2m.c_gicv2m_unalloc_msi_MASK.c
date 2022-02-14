
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v2m_data {scalar_t__ spi_start; int bm; } ;


 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct v2m_data *VAR_1, unsigned int VAR_2,
          int VAR_3)
{
 FUNC_2(&VAR_0);
 FUNC_0(VAR_1->bm, VAR_2 - VAR_1->spi_start,
         FUNC_1(VAR_3));
 FUNC_3(&VAR_0);
}
