
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stripe_head {int dummy; } ;
struct ppl_log {struct ppl_conf* ppl_conf; } ;
struct ppl_io_unit {int seq; struct page* header_page; int biovec; int bio; int pending_flushes; int pending_stripes; int stripe_list; int log_sibling; struct ppl_log* log; } ;
struct ppl_header {int generation; int signature; struct ppl_io_unit* reserved; } ;
struct ppl_conf {int seq; int signature; int io_pool; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct ppl_header*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct ppl_io_unit* FUNC_7 (int *,int ) ;
 int FUNC_8 (struct ppl_io_unit*,int,int) ;
 struct ppl_header* FUNC_9 (struct page*) ;

__attribute__((used)) static struct ppl_io_unit *FUNC_10(struct ppl_log *VAR_3,
       struct stripe_head *VAR_4)
{
 struct ppl_conf *VAR_5 = VAR_3->ppl_conf;
 struct ppl_io_unit *VAR_6;
 struct ppl_header *VAR_7;
 struct page *VAR_8;

 VAR_6 = FUNC_7(&VAR_5->io_pool, VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_8 = VAR_6->header_page;
 FUNC_8(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->header_page = VAR_8;

 VAR_6->log = VAR_3;
 FUNC_0(&VAR_6->log_sibling);
 FUNC_0(&VAR_6->stripe_list);
 FUNC_2(&VAR_6->pending_stripes, 0);
 FUNC_2(&VAR_6->pending_flushes, 0);
 FUNC_3(&VAR_6->bio, VAR_6->biovec, VAR_2);

 VAR_7 = FUNC_9(VAR_6->header_page);
 FUNC_4(VAR_7);
 FUNC_8(VAR_7->reserved, 0xff, VAR_1);
 VAR_7->signature = FUNC_5(VAR_5->signature);

 VAR_6->seq = FUNC_1(1, &VAR_5->seq);
 VAR_7->generation = FUNC_6(VAR_6->seq);

 return VAR_6;
}
