
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tag_dec; int term_dec; } ;
struct TYPE_6__ {int term; int remaining; int len; TYPE_1__ dec; } ;
typedef TYPE_2__ ilist_decoder_t ;
typedef int iheap_en_t ;
struct TYPE_7__ {int left_subtree_size_threshold; } ;


 TYPE_4__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 long long VAR_2 ;
 long long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (long long*,void const*,int) ;
 int FUNC_2 (int,char*,int,int) ;
 long long VAR_5 ;
 int FUNC_3 (int,int,unsigned char*,int ,int ,int ) ;
 int FUNC_4 (int *,int,int,unsigned char*,int ,int ) ;

__attribute__((used)) static void FUNC_5 (iheap_en_t *VAR_6, ilist_decoder_t *VAR_7, int VAR_8, int VAR_9, const void *VAR_10, int VAR_11) {
  unsigned char *VAR_12;
  FUNC_2 (3, "init_decoder (N = %d, K = %d)\n", VAR_8, VAR_9);
  if (VAR_9 < 0) {
    VAR_9 *= -1;
    VAR_12 = (unsigned char *) VAR_10;
  } else {
    long long VAR_13;
    FUNC_1 (&VAR_13, VAR_10, 8);
    FUNC_0 (VAR_13 >= VAR_5 && VAR_13 < VAR_3);
    VAR_13 -= VAR_5;
    FUNC_0 (VAR_13 >= 0 && VAR_13 < VAR_2);
    VAR_12 = (unsigned char *)(VAR_1 + VAR_13);
  }
  VAR_7->term = VAR_11;
  if (VAR_11) {
    VAR_7->dec.term_dec = FUNC_4 (VAR_6, VAR_8, VAR_9, VAR_12, 0, VAR_0.left_subtree_size_threshold);
  } else {
    VAR_7->dec.tag_dec = FUNC_3 (VAR_8, VAR_9, VAR_12, VAR_4, 0, VAR_0.left_subtree_size_threshold);
  }
  VAR_7->remaining = VAR_9;
  VAR_7->len = VAR_9;
}
