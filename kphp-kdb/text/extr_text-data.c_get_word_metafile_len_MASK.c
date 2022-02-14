
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int user_id; TYPE_1__* search_mf; } ;
typedef TYPE_2__ user_t ;
struct TYPE_4__ {int len; int data; } ;


 int * VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int VAR_2 ;

int FUNC_3 (unsigned char *VAR_3, int VAR_4, user_t *VAR_5, int VAR_6) {
 int VAR_7 = (*VAR_3 >> 2) + 6;
 unsigned char *VAR_8 = VAR_3 + (VAR_7 >> 3);
 int VAR_9 = ((((int) *VAR_8++) << 24) | (1 << 23)) << (VAR_7 & 7);


 int VAR_10 = 0;
 while ((VAR_9 < 0)) {
   VAR_10++;
   { VAR_9 <<= 1; if (FUNC_0(VAR_9 == (-1 << 31))) { VAR_9 = ((int) *VAR_8++ << 24) + (1 << 23); } };
   FUNC_0 (VAR_10 <= 30);
 }
 { VAR_9 <<= 1; if (FUNC_0(VAR_9 == (-1 << 31))) { VAR_9 = ((int) *VAR_8++ << 24) + (1 << 23); } };
 int VAR_11 = 1;
 while (VAR_10 > 0) {
   VAR_11 <<= 1;
   VAR_11 += (VAR_9 < 0);
   { VAR_9 <<= 1; if (FUNC_0(VAR_9 == (-1 << 31))) { VAR_9 = ((int) *VAR_8++ << 24) + (1 << 23); } };
   VAR_10--;
 }
 if (VAR_9 & (1 << 23)) {
   VAR_8--;
 }
 if (VAR_8 > VAR_3 + VAR_4) {
   FUNC_1 (VAR_2, "ptr=%p wm=%p ws=%d r=%d user_id=%d word_idx=%d word_crc32=%016x search_mf_data=%d search_mf_len=%d\n", VAR_8, VAR_3, VAR_4, VAR_11, VAR_5->user_id, VAR_6, VAR_0[VAR_6], VAR_5->search_mf ? VAR_5->search_mf->data : 0, VAR_5->search_mf ? VAR_5->search_mf->len : -1);
   int VAR_12;
   for (VAR_12 = 0; VAR_12 < 32 && VAR_12 < VAR_8 - VAR_3; VAR_12++) {
     FUNC_1 (VAR_2, "%02x ", VAR_3[VAR_12]);
   }
   FUNC_1 (VAR_2, "\n");
 }
 FUNC_0 (VAR_8 <= VAR_3 + VAR_4);
 return VAR_11;
}
