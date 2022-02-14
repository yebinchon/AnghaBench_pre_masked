
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skcipher_request {char* iv; struct scatterlist* dst; struct scatterlist* src; } ;
struct scatterlist {int dummy; } ;
struct journal_completion {int in_flight; } ;
struct dm_integrity_c {int journal_crypt; struct skcipher_request** sk_requests; struct scatterlist** journal_scatterlist; struct scatterlist** journal_io_scatterlist; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct journal_completion*) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int,struct skcipher_request*,struct journal_completion*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,char*,unsigned int) ;
 int FUNC_8 (struct dm_integrity_c*,unsigned int,int) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct dm_integrity_c *VAR_0, bool VAR_1, unsigned VAR_2,
     unsigned VAR_3, struct journal_completion *VAR_4)
{
 struct scatterlist **VAR_5;
 struct scatterlist **VAR_6;

 FUNC_0(2, &VAR_4->in_flight);

 if (FUNC_6(VAR_1)) {
  VAR_5 = VAR_0->journal_scatterlist;
  VAR_6 = VAR_0->journal_io_scatterlist;
 } else {
  VAR_5 = VAR_0->journal_io_scatterlist;
  VAR_6 = VAR_0->journal_scatterlist;
 }

 do {
  struct skcipher_request *VAR_7;
  unsigned VAR_8;
  char *VAR_9;

  if (FUNC_6(VAR_1))
   FUNC_8(VAR_0, VAR_2, 1);

  VAR_7 = VAR_0->sk_requests[VAR_2];
  VAR_8 = FUNC_4(VAR_0->journal_crypt);
  VAR_9 = VAR_7->iv;

  FUNC_7(VAR_9, VAR_9 + VAR_8, VAR_8);

  VAR_7->src = VAR_5[VAR_2];
  VAR_7->dst = VAR_6[VAR_2];

  if (FUNC_9(FUNC_5(VAR_1, VAR_7, VAR_4)))
   FUNC_2(&VAR_4->in_flight);

  VAR_2++;
  VAR_3--;
 } while (VAR_3);

 FUNC_1(&VAR_4->in_flight);
 FUNC_3(VAR_4);
}
