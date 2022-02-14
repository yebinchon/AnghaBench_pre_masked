
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lro_mbuf_sort {int dummy; } ;
struct lro_entry {int dummy; } ;
struct lro_ctrl {unsigned int lro_mbuf_max; unsigned int lro_cnt; int lro_free; struct lro_mbuf_sort* lro_mbuf_data; int * lro_hash; int lro_hashsz; int lro_active; struct ifnet* ifp; int lro_length_lim; int lro_ackcnt_lim; scalar_t__ lro_mbuf_count; scalar_t__ lro_flushed; scalar_t__ lro_queued; scalar_t__ lro_bad_csum; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct lro_entry*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (size_t,int ,int) ;
 int FUNC_4 (struct lro_ctrl*,int ,int) ;
 int VAR_7 ;
 int * FUNC_5 (unsigned int,int ,int *,int ) ;

int
FUNC_6(struct lro_ctrl *VAR_8, struct ifnet *VAR_9,
    unsigned VAR_10, unsigned VAR_11)
{
 struct lro_entry *VAR_12;
 size_t VAR_13;
 unsigned VAR_14, VAR_15;

 VAR_8->lro_bad_csum = 0;
 VAR_8->lro_queued = 0;
 VAR_8->lro_flushed = 0;
 VAR_8->lro_mbuf_count = 0;
 VAR_8->lro_mbuf_max = VAR_11;
 VAR_8->lro_cnt = VAR_10;
 VAR_8->lro_ackcnt_lim = VAR_5;
 VAR_8->lro_length_lim = VAR_6;
 VAR_8->ifp = VAR_9;
 FUNC_0(&VAR_8->lro_free);
 FUNC_0(&VAR_8->lro_active);


 if (VAR_10 > VAR_11)
  VAR_15 = VAR_10;
 else
  VAR_15 = VAR_11;
 VAR_8->lro_hash = FUNC_5(VAR_15, VAR_2, &VAR_8->lro_hashsz,
     VAR_1);
 if (VAR_8->lro_hash == ((void*)0)) {
  FUNC_4(VAR_8, 0, sizeof(*VAR_8));
  return (VAR_0);
 }


 VAR_13 = (VAR_11 * sizeof(struct lro_mbuf_sort)) +
     (VAR_10 * sizeof(*VAR_12));
 VAR_8->lro_mbuf_data = (struct lro_mbuf_sort *)
     FUNC_3(VAR_13, VAR_2, VAR_3 | VAR_4);


 if (VAR_8->lro_mbuf_data == ((void*)0)) {
  FUNC_2(VAR_8->lro_hash, VAR_2);
  FUNC_4(VAR_8, 0, sizeof(*VAR_8));
  return (VAR_0);
 }

 VAR_12 = (struct lro_entry *)
     (VAR_8->lro_mbuf_data + VAR_11);


 for (VAR_14 = 0; VAR_14 != VAR_10; VAR_14++)
  FUNC_1(&VAR_8->lro_free, VAR_12 + VAR_14, VAR_7);

 return (0);
}
