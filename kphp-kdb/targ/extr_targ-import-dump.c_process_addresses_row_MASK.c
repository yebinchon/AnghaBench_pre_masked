
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_address_extended {int* text; void* atype; void* country; void* street; void* station; void* district; void* city; void* user_id; scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void** VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_0 (void*) ;
 char* FUNC_1 (int ,int ,void*,int*,int) ;
 int FUNC_2 (int*,char*,int) ;
 void* VAR_16 ;
 struct lev_address_extended* FUNC_3 (int) ;

void FUNC_4 (void) {
  struct lev_address_extended *VAR_17;
  char *VAR_18, *VAR_19;
  int VAR_20, VAR_21;
  int VAR_22;

  VAR_16 = VAR_4[VAR_11];

  if (!FUNC_0(VAR_16)) {
    return;
  }

  VAR_18 = FUNC_1 (VAR_0, VAR_2, VAR_4[VAR_10], &VAR_20, 64);
  VAR_19 = FUNC_1 (VAR_1, VAR_3, VAR_4[VAR_12], &VAR_21, 128);

  VAR_22 = VAR_20 + 1 + VAR_21;

  VAR_17 = FUNC_3 (VAR_22 + 27);
  VAR_17->type = VAR_5 + VAR_22;
  VAR_17->user_id = VAR_16;
  VAR_17->city = VAR_4[VAR_7];
  VAR_17->district = VAR_4[VAR_9];
  VAR_17->station = VAR_4[VAR_13];
  VAR_17->street = VAR_4[VAR_14];
  VAR_17->country = VAR_4[VAR_8];
  VAR_17->atype = VAR_4[VAR_15];

  if (VAR_20) {
    FUNC_2 (VAR_17->text, VAR_18, VAR_20);
  }
  VAR_17->text[VAR_20] = 9;
  if (VAR_21) {
    FUNC_2 (VAR_17->text + VAR_20 + 1, VAR_19, VAR_21);
  }
  VAR_17->text[VAR_22] = 0;

  VAR_6++;

}
