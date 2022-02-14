
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct pblk_line {int dummy; } ;
struct pblk {struct pblk_line* lines; } ;


 size_t FUNC_0 (struct ppa_addr) ;

__attribute__((used)) static inline struct pblk_line *FUNC_1(struct pblk *VAR_0,
       struct ppa_addr VAR_1)
{
 return &VAR_0->lines[FUNC_0(VAR_1)];
}
