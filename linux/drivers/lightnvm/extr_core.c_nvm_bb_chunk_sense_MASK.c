
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppa_addr {int dummy; } ;
struct page {int dummy; } ;
struct nvm_rq {int is_seq; int nr_ppas; int error; int ppa_addr; int opcode; struct bio* bio; int * member_0; } ;
struct nvm_dev {int dummy; } ;
struct bio_vec {int dummy; } ;
struct bio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 int FUNC_2 (struct bio*,struct page*,int ,int ) ;
 int FUNC_3 (struct bio*,struct bio_vec*,int) ;
 int FUNC_4 (struct bio*,int ,int ) ;
 int FUNC_5 (struct nvm_dev*,struct ppa_addr) ;
 int FUNC_6 (struct nvm_dev*,struct nvm_rq*) ;

__attribute__((used)) static int FUNC_7(struct nvm_dev *VAR_5, struct ppa_addr VAR_6)
{
 struct nvm_rq VAR_7 = { ((void*)0) };
 struct bio VAR_8;
 struct bio_vec VAR_9;
 struct page *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_3(&VAR_8, &VAR_9, 1);
 FUNC_2(&VAR_8, VAR_10, VAR_3, 0);
 FUNC_4(&VAR_8, VAR_4, 0);

 VAR_7.bio = &VAR_8;
 VAR_7.opcode = VAR_2;
 VAR_7.is_seq = 1;
 VAR_7.nr_ppas = 1;
 VAR_7.ppa_addr = FUNC_5(VAR_5, VAR_6);

 VAR_11 = FUNC_6(VAR_5, &VAR_7);
 if (VAR_11)
  return VAR_11;

 FUNC_0(VAR_10);

 return VAR_7.error;
}
