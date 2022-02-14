
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct vmctx {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmctx*,int,int,int,int,int,int,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct vmctx *VAR_1, int VAR_2, int VAR_3, uint64_t VAR_4,
    int VAR_5, uint64_t *VAR_6, void *VAR_7, long VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_12 = VAR_4 & 0xfff;
 VAR_11 = (VAR_4 >> 12) & 0x7;
 VAR_10 = (VAR_4 >> 15) & 0x1f;
 VAR_9 = (VAR_4 >> 20) & 0xff;
 VAR_13 = (VAR_3 == VAR_0);
 if (VAR_13)
  *VAR_6 = ~0UL;
 FUNC_0(VAR_1, VAR_2, VAR_13, VAR_9, VAR_10, VAR_11, VAR_12, VAR_5, (uint32_t *)VAR_6);
 return (0);
}
