
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pblk {int dummy; } ;
struct line_header {int dummy; } ;
typedef int crc ;


 int FUNC_0 (int ,unsigned char*,int) ;

__attribute__((used)) static inline u32 FUNC_1(struct pblk *VAR_0,
         struct line_header *VAR_1)
{
 u32 VAR_2 = ~(u32)0;

 VAR_2 = FUNC_0(VAR_2, (unsigned char *)VAR_1 + sizeof(VAR_2),
    sizeof(struct line_header) - sizeof(VAR_2));

 return VAR_2;
}
