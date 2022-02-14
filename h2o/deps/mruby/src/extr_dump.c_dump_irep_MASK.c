
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct rite_section_lv_header {int dummy; } ;
struct rite_section_irep_header {int dummy; } ;
struct rite_section_debug_header {int dummy; } ;
struct rite_binary_header {int dummy; } ;
struct rite_binary_footer {int dummy; } ;
typedef int mrb_sym ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef scalar_t__ mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int**,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int**,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *,int*,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int*) ;
 scalar_t__ FUNC_8 (int *,size_t) ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,size_t,int*,int) ;
 int FUNC_11 (int *,int *,int*,int*,int ) ;
 int FUNC_12 (int *,int *,int*,size_t*,int) ;
 int FUNC_13 (int *,int *,int*,int*,int ) ;

__attribute__((used)) static int
FUNC_14(mrb_state *VAR_3, mrb_irep *VAR_4, uint8_t VAR_5, uint8_t **VAR_6, size_t *VAR_7)
{
  int VAR_8 = VAR_1;
  size_t VAR_9;
  size_t VAR_10;
  size_t VAR_11 = 0, VAR_12 = 0;
  uint8_t *VAR_13 = ((void*)0);
  mrb_bool const VAR_14 = FUNC_1(VAR_4), VAR_15 = FUNC_6(VAR_4);
  mrb_sym *VAR_16 = ((void*)0); uint32_t VAR_17 = 0;
  mrb_sym *VAR_18 = ((void*)0); uint16_t VAR_19 = 0;

  if (VAR_3 == ((void*)0)) {
    *VAR_6 = ((void*)0);
    return VAR_1;
  }

  VAR_10 = sizeof(struct rite_section_irep_header);
  VAR_10 += FUNC_4(VAR_3, VAR_4);


  if (VAR_5 & VAR_0) {
    if (VAR_14) {
      VAR_11 += sizeof(struct rite_section_debug_header);

      VAR_18 = (mrb_sym*)FUNC_8(VAR_3, sizeof(mrb_sym) + 1);


      VAR_11 += sizeof(uint16_t);
      VAR_11 += FUNC_3(VAR_3, VAR_4, &VAR_18, &VAR_19);

      VAR_11 += FUNC_2(VAR_3, VAR_4);
    }
  }

  if (VAR_15) {
    VAR_12 += sizeof(struct rite_section_lv_header);
    FUNC_0(VAR_3, VAR_4, &VAR_16, &VAR_17);
    VAR_12 += FUNC_5(VAR_3, VAR_4, VAR_16, VAR_17);
  }

  VAR_9 = sizeof(struct rite_binary_header) +
                VAR_10 + VAR_11 + VAR_12 +
                sizeof(struct rite_binary_footer);
  VAR_13 = *VAR_6 = (uint8_t*)FUNC_8(VAR_3, VAR_9);
  VAR_13 += sizeof(struct rite_binary_header);

  VAR_8 = FUNC_12(VAR_3, VAR_4, VAR_13, &VAR_10, VAR_5);
  if (VAR_8 != VAR_2) {
    goto error_exit;
  }
  VAR_13 += VAR_10;
  *VAR_7 = sizeof(struct rite_binary_header) +
              VAR_10 + VAR_11 + VAR_12 +
              sizeof(struct rite_binary_footer);


  if (VAR_5 & VAR_0) {
    if (VAR_14) {
      VAR_8 = FUNC_11(VAR_3, VAR_4, VAR_13, VAR_18, VAR_19);
      if (VAR_8 != VAR_2) {
        goto error_exit;
      }
    }
    VAR_13 += VAR_11;
  }

  if (VAR_15) {
    VAR_8 = FUNC_13(VAR_3, VAR_4, VAR_13, VAR_16, VAR_17);
    if (VAR_8 != VAR_2) {
      goto error_exit;
    }
    VAR_13 += VAR_12;
  }

  FUNC_9(VAR_3, VAR_13);
  FUNC_10(VAR_3, *VAR_7, *VAR_6, VAR_5);

error_exit:
  if (VAR_8 != VAR_2) {
    FUNC_7(VAR_3, *VAR_6);
    *VAR_6 = ((void*)0);
  }
  FUNC_7(VAR_3, VAR_16);
  FUNC_7(VAR_3, VAR_18);
  return VAR_8;
}
