
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ppa_addr {int dummy; } ;
struct pblk_line {int id; } ;
struct pblk {int inflight_reads; } ;
struct nvm_rq {struct ppa_addr* ppa_list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct ppa_addr FUNC_0 (struct pblk*,scalar_t__,int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct pblk*,struct ppa_addr*,scalar_t__*,unsigned int) ;
 int FUNC_3 (struct ppa_addr,struct ppa_addr) ;

__attribute__((used)) static int FUNC_4(struct pblk *VAR_2, struct nvm_rq *VAR_3,
         struct pblk_line *VAR_4, u64 *VAR_5,
         u64 *VAR_6, unsigned int VAR_7)
{
 struct ppa_addr VAR_8[VAR_1];
 struct ppa_addr VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 FUNC_2(VAR_2, VAR_8, VAR_5, VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
  if (VAR_5[VAR_11] == VAR_0)
   continue;

  VAR_9 = FUNC_0(VAR_2, VAR_6[VAR_11], VAR_4->id);
  if (!FUNC_3(VAR_8[VAR_11], VAR_9)) {
   VAR_6[VAR_11] = VAR_5[VAR_11] = VAR_0;
   continue;
  }

  VAR_3->ppa_list[VAR_10++] = VAR_8[VAR_11];
 }





 return VAR_10;
}
