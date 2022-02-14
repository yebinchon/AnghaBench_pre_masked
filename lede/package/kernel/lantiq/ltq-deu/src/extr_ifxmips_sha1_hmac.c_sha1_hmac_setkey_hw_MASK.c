
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct deu_hash_t {int KIDX; int KEY; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(const u8 *VAR_3, unsigned int VAR_4)
{
    volatile struct deu_hash_t *VAR_5 = (struct deu_hash_t *) VAR_2;
    int VAR_6, VAR_7;
    unsigned long VAR_8;
    u32 *VAR_9 = (u32 *)VAR_3;

    VAR_7 = 0;

    VAR_1;
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6+=4)
    {
         VAR_5->KIDX = VAR_7;
         asm("sync");
         VAR_5->KEY = *((u32 *) VAR_9 + VAR_7);
         VAR_7++;
    }

    VAR_0;
    return 0;
}
