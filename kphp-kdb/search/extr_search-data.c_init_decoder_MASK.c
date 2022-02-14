
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct search_list_decoder {int remaining; int len; int dec; } ;
struct TYPE_2__ {int left_subtree_size_threshold; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int) ;
 long long VAR_5 ;
 long long VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (long long*,void const*,int) ;
 int FUNC_2 (int,char*,int,int) ;
 long long VAR_8 ;
 int FUNC_3 (int,int,unsigned char*,int,int ,int ) ;

__attribute__((used)) static void FUNC_4 (struct search_list_decoder *VAR_9, int VAR_10, int VAR_11, int VAR_12, const void *VAR_13, int VAR_14) {
  unsigned char *VAR_15;
  FUNC_2 (3, "init_decoder (N = %d, K = %d)\n", VAR_10, VAR_11);
  if (VAR_11 <= 2) {
    VAR_15 = (unsigned char *) VAR_13;
    VAR_14 = VAR_7;
  } else if (VAR_12 <= 8) {
    VAR_15 = (unsigned char *) VAR_13;
  } else {
    long long VAR_16;
    FUNC_1 (&VAR_16, VAR_13, 8);
    FUNC_0 (VAR_16 >= VAR_8 && VAR_16 < VAR_6);
    FUNC_0 (VAR_16 + VAR_12 <= VAR_6);
    VAR_16 -= VAR_8;
    FUNC_0 (VAR_16 >= 0 && VAR_16 < VAR_5 && VAR_16 + VAR_12 <= VAR_5);
    VAR_15 = (unsigned char *)(VAR_1 + VAR_16);
  }
  FUNC_0 (VAR_3 < 2 * VAR_2);
  VAR_9->dec = VAR_4[VAR_3++] = FUNC_3 (VAR_10, VAR_11, VAR_15, VAR_14, 0, VAR_0.left_subtree_size_threshold);
  VAR_9->remaining = VAR_11;
  VAR_9->len = VAR_11;
}
