
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __be32 ;


 int FUNC_0 (char*,char const* const) ;
 int FUNC_1 (char*,int const*,int) ;
 int FUNC_2 (char*,int ,int) ;

__attribute__((used)) static inline void
FUNC_3(const char *const VAR_0, const __be32 VAR_1, char *VAR_2)
{
 VAR_2[0] = 0xfe;
 VAR_2[1] = 0x80;
 FUNC_2(&VAR_2[2], 0, 2);
 FUNC_1(&VAR_2[4], &VAR_1, 4);
 FUNC_0(&VAR_2[8], VAR_0);
}
