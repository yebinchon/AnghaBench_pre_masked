
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etmv4_drvdata {int instrp0; int trcbb; int trccond; int trccci; int retstack; int trc_error; int syncpr; int stallctl; int sysstall; int nooverflow; int atbtrig; int lpoverride; scalar_t__ base; void* nr_cntr; void* nrseqstate; void* trcid_size; void* nr_ext_inp; void* numvmidc; void* numcidc; void* nr_ss_cmp; void* nr_resource; void* nr_pe_cmp; void* nr_addr_cmp; void* nr_pe; void* ns_ex_level; void* s_ex_level; void* ccitmin; void* ccsize; void* vmid_size; void* ctxid_size; void* arch; void* ts_size; void* q_support; void* nr_event; } ;


 void* FUNC_0 (int ,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct etmv4_drvdata*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(void *VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 struct etmv4_drvdata *VAR_13 = VAR_6;


 FUNC_3(VAR_13);

 FUNC_2(VAR_13->base);


 VAR_7 = FUNC_4(VAR_13->base + VAR_0);


 if (FUNC_0(VAR_7, 1, 1) && FUNC_0(VAR_7, 2, 2))
  VAR_13->instrp0 = 1;
 else
  VAR_13->instrp0 = 0;


 if (FUNC_0(VAR_7, 5, 5))
  VAR_13->trcbb = 1;
 else
  VAR_13->trcbb = 0;


 if (FUNC_0(VAR_7, 6, 6))
  VAR_13->trccond = 1;
 else
  VAR_13->trccond = 0;


 if (FUNC_0(VAR_7, 7, 7))
  VAR_13->trccci = 1;
 else
  VAR_13->trccci = 0;


 if (FUNC_0(VAR_7, 9, 9))
  VAR_13->retstack = 1;
 else
  VAR_13->retstack = 0;


 VAR_13->nr_event = FUNC_0(VAR_7, 10, 11);

 VAR_13->q_support = FUNC_0(VAR_7, 15, 16);

 VAR_13->ts_size = FUNC_0(VAR_7, 24, 28);


 VAR_8 = FUNC_4(VAR_13->base + VAR_1);




 VAR_13->arch = FUNC_0(VAR_8, 4, 11);


 VAR_9 = FUNC_4(VAR_13->base + VAR_2);

 VAR_13->ctxid_size = FUNC_0(VAR_9, 5, 9);

 VAR_13->vmid_size = FUNC_0(VAR_9, 10, 14);

 VAR_13->ccsize = FUNC_0(VAR_9, 25, 28);

 VAR_10 = FUNC_4(VAR_13->base + VAR_3);

 VAR_13->ccitmin = FUNC_0(VAR_10, 0, 11);

 VAR_13->s_ex_level = FUNC_0(VAR_10, 16, 19);

 VAR_13->ns_ex_level = FUNC_0(VAR_10, 20, 23);





 if (FUNC_0(VAR_10, 24, 24))
  VAR_13->trc_error = 1;
 else
  VAR_13->trc_error = 0;


 if (FUNC_0(VAR_10, 25, 25))
  VAR_13->syncpr = 1;
 else
  VAR_13->syncpr = 0;


 if (FUNC_0(VAR_10, 26, 26))
  VAR_13->stallctl = 1;
 else
  VAR_13->stallctl = 0;


 if (FUNC_0(VAR_10, 27, 27))
  VAR_13->sysstall = 1;
 else
  VAR_13->sysstall = 0;


 VAR_13->nr_pe = FUNC_0(VAR_10, 28, 30);


 if (FUNC_0(VAR_10, 31, 31))
  VAR_13->nooverflow = 1;
 else
  VAR_13->nooverflow = 0;


 VAR_11 = FUNC_4(VAR_13->base + VAR_4);

 VAR_13->nr_addr_cmp = FUNC_0(VAR_11, 0, 3);

 VAR_13->nr_pe_cmp = FUNC_0(VAR_11, 12, 15);






 VAR_13->nr_resource = FUNC_0(VAR_11, 16, 19) + 1;




 VAR_13->nr_ss_cmp = FUNC_0(VAR_11, 20, 23);

 VAR_13->numcidc = FUNC_0(VAR_11, 24, 27);

 VAR_13->numvmidc = FUNC_0(VAR_11, 28, 31);

 VAR_12 = FUNC_4(VAR_13->base + VAR_5);

 VAR_13->nr_ext_inp = FUNC_0(VAR_12, 0, 8);

 VAR_13->trcid_size = FUNC_0(VAR_12, 16, 21);

 if (FUNC_0(VAR_12, 22, 22))
  VAR_13->atbtrig = 1;
 else
  VAR_13->atbtrig = 0;




 if (FUNC_0(VAR_12, 23, 23))
  VAR_13->lpoverride = 1;
 else
  VAR_13->lpoverride = 0;

 VAR_13->nrseqstate = FUNC_0(VAR_12, 25, 27);

 VAR_13->nr_cntr = FUNC_0(VAR_12, 28, 30);
 FUNC_1(VAR_13->base);
}
