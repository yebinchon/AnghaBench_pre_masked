
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filehdr {void* f_flags; void* f_opthdr; void* f_nsyms; void* f_symptr; void* f_timdat; void* f_nscns; void* f_magic; } ;


 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct filehdr *VAR_0)
{
 VAR_0->f_magic = FUNC_0(VAR_0->f_magic);
 VAR_0->f_nscns = FUNC_0(VAR_0->f_nscns);
 VAR_0->f_timdat = FUNC_1(VAR_0->f_timdat);
 VAR_0->f_symptr = FUNC_1(VAR_0->f_symptr);
 VAR_0->f_nsyms = FUNC_1(VAR_0->f_nsyms);
 VAR_0->f_opthdr = FUNC_0(VAR_0->f_opthdr);
 VAR_0->f_flags = FUNC_0(VAR_0->f_flags);
}
