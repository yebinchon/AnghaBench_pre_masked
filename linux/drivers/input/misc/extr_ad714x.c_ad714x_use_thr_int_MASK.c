
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad714x_chip {int (* write ) (struct ad714x_chip*,int ,unsigned short) ;int (* read ) (struct ad714x_chip*,int ,unsigned short*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ad714x_chip*,int ,unsigned short*,int) ;
 int FUNC_1 (struct ad714x_chip*,int ,unsigned short) ;
 int FUNC_2 (struct ad714x_chip*,int ,unsigned short*,int) ;
 int FUNC_3 (struct ad714x_chip*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_4(struct ad714x_chip *VAR_2,
    int VAR_3, int VAR_4)
{
 unsigned short VAR_5;
 unsigned short VAR_6;

 VAR_6 = ((1 << (VAR_4 + 1)) - 1) - ((1 << VAR_3) - 1);

 VAR_2->read(VAR_2, VAR_0, &VAR_5, 1);
 VAR_5 &= ~(1 << VAR_4);
 VAR_2->write(VAR_2, VAR_0, VAR_5);

 VAR_2->read(VAR_2, VAR_1, &VAR_5, 1);
 VAR_5 |= VAR_6;
 VAR_2->write(VAR_2, VAR_1, VAR_5);
}
