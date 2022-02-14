
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gameport {scalar_t__ io; } ;


 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gameport *VAR_0, int *VAR_1, int *VAR_2)
{
 unsigned short VAR_3;

 VAR_3 = FUNC_0(VAR_0->io + 2);
 *VAR_2 = (~VAR_3 >> 14) & 0x03;
 VAR_1[0] = (VAR_3 == 0xffff) ? -1 : ((VAR_3 & 0x1fff) << 5);
 VAR_3 = FUNC_0(VAR_0->io + 4);
 VAR_1[1] = (VAR_3 == 0xffff) ? -1 : ((VAR_3 & 0x1fff) << 5);
 VAR_3 = FUNC_0(VAR_0->io + 6);
 *VAR_2 |= ((~VAR_3 >> 14) & 0x03) << 2;
 VAR_1[2] = (VAR_3 == 0xffff) ? -1 : ((VAR_3 & 0x1fff) << 5);
 VAR_3 = FUNC_0(VAR_0->io + 8);
 VAR_1[3] = (VAR_3 == 0xffff) ? -1 : ((VAR_3 & 0x1fff) << 5);
 FUNC_1(0xff, VAR_0->io);

        return 0;
}
