
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_add_message {int type; long long legacy_id; int date; int ua_hash; char* text; int* extra; scalar_t__ text_len; int user_id; } ;


 int FUNC_0 (long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 struct lev_add_message* FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (long long*,long long*,int) ;
 int FUNC_7 (struct lev_add_message*,int) ;
 int VAR_6 ;

int FUNC_8 (struct lev_add_message *VAR_7, int VAR_8, char *VAR_9, long long VAR_10) {
  struct lev_add_message *VAR_11;
  char *VAR_12;
  int VAR_13;


  if (FUNC_3 (VAR_7->user_id) < 0 || (unsigned) VAR_7->text_len >= VAR_5) {
    return -1;
  }



  int VAR_14 = VAR_7->type >> 16, VAR_15 = VAR_14 & VAR_6;

  VAR_7->legacy_id = VAR_10;
  if (!FUNC_0 (VAR_10)) {
    VAR_7->date = VAR_7->type & 0xffff;
    VAR_7->type = VAR_1 | VAR_15;
    VAR_7->ua_hash = (VAR_7->ua_hash & 0xffffffffLL) | (VAR_10 & 0xffffffff00000000LL);
  } else if (VAR_15 & VAR_4) {
    VAR_7->date = VAR_7->type & 0xffff;
    VAR_7->type = VAR_0 | VAR_15;
  } else if (VAR_7->type & -0x1000) {
    VAR_7->date = VAR_7->type & 0xffff;
    VAR_7->type = VAR_2;
  } else {
    VAR_7->type |= VAR_3;
  }

  int VAR_16 = 4 * FUNC_5 (VAR_14);
  int VAR_17 = 4 * FUNC_5 (VAR_15);

  VAR_11 = FUNC_1 (VAR_7->type, sizeof (struct lev_add_message) + VAR_17 + VAR_7->text_len + 1, VAR_7->user_id);
  FUNC_6 (&VAR_11->legacy_id, &VAR_7->legacy_id, (char *) &VAR_7->text - (char *) &VAR_7->legacy_id);

  VAR_12 = VAR_11->text + VAR_17;
  if (!VAR_9) {
    VAR_9 = VAR_7->text + VAR_16;
  }

  int *VAR_18 = VAR_11->extra, *VAR_19 = VAR_7->extra;

  for (VAR_13 = 1; VAR_13 < VAR_4; VAR_13 <<= 1) {
    if (VAR_15 & VAR_13) {
      if (VAR_13 < 256) {
        *VAR_18++ = *VAR_19++;
      } else {
        *(long long *) VAR_18 = *(long long *) VAR_19;
        VAR_18 += 2;
        VAR_19 += 2;
      }
    } else if (VAR_14 & VAR_13) {
      VAR_19 += (VAR_13 < 256 ? 1 : 2);
    }
  }

  FUNC_2 ((char *) VAR_18 == VAR_12);

  FUNC_4 (VAR_12, VAR_9, VAR_7->text_len);

  return FUNC_7 (VAR_11, VAR_8);
}
