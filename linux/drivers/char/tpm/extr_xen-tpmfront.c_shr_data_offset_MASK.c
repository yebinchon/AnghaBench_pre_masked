
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vtpm_shared_page {int nr_extra_pages; } ;



__attribute__((used)) static unsigned int FUNC_0(struct vtpm_shared_page *VAR_0)
{
 return sizeof(*VAR_0) + sizeof(u32) * VAR_0->nr_extra_pages;
}
