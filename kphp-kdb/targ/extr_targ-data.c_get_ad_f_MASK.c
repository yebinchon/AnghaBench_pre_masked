
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int flags; int ad_id; double factor; int recent_views_limit; struct advert* hash_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct advert** VAR_3 ;
 int* VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 struct advert* FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (struct advert*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,char*,int) ;
 struct advert* FUNC_4 (int) ;

struct advert *FUNC_5 (int VAR_10, int VAR_11) {
  struct advert *VAR_12;
  if ((unsigned) VAR_10 >= VAR_5 || !VAR_10) {
    return 0;
  }
  VAR_12 = FUNC_1 (VAR_10);
  if (VAR_12 || !VAR_11) {
    return VAR_12;
  }
  VAR_12 = FUNC_4 (sizeof (struct advert));
  if (!VAR_12) {
    return VAR_12;
  }
  FUNC_2 (VAR_12, 0, sizeof(*VAR_12));
  if (VAR_10 > VAR_7) {
    VAR_7 = VAR_10;
  }
  VAR_9++;
  if (FUNC_0 (VAR_10)) {
    VAR_4[VAR_10 >> 3] &= ~(1 << (VAR_10 & 7));
    VAR_12->flags = VAR_0 | VAR_1;
    VAR_6++;
  }
  FUNC_3 (4, "created ad id %d\n", VAR_10);
  VAR_12->ad_id = VAR_10;
  VAR_12->hash_next = VAR_3[VAR_10 & (VAR_2 - 1)];
  VAR_3[VAR_10 & (VAR_2 - 1)] = VAR_12;
  VAR_12->factor = 1.0;
  VAR_12->recent_views_limit = 0xffff;
  VAR_8++;
  return VAR_12;
}
