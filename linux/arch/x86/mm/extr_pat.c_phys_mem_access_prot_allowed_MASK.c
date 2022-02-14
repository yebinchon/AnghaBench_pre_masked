
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_flags; } ;
typedef int pgprot_t ;
typedef enum page_cache_mode { ____Placeholder_page_cache_mode } page_cache_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long,unsigned long) ;

int FUNC_4(struct file *VAR_4, unsigned long VAR_5,
    unsigned long VAR_6, pgprot_t *VAR_7)
{
 enum page_cache_mode VAR_8 = VAR_3;

 if (!FUNC_3(VAR_5, VAR_6))
  return 0;

 if (VAR_4->f_flags & VAR_0)
  VAR_8 = VAR_2;

 *VAR_7 = FUNC_0((FUNC_2(*VAR_7) & ~VAR_1) |
        FUNC_1(VAR_8));
 return 1;
}
