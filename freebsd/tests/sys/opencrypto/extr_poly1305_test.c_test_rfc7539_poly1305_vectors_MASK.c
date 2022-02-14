
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct poly1305_kat {int vector_name; int test_msg_len; } ;
typedef int key ;
typedef int exptag ;


 int FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int,int *,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int,int *,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *,int) ;
 size_t FUNC_7 (struct poly1305_kat*) ;
 int FUNC_8 (struct poly1305_kat const*,int *,int *,int *) ;
 struct poly1305_kat* VAR_3 ;

__attribute__((used)) static void
FUNC_9(int VAR_4, const char *VAR_5)
{
 uint8_t VAR_6[VAR_1], VAR_7[VAR_1],
     VAR_8[VAR_2], VAR_9[512];
 int VAR_10, VAR_11;
 size_t VAR_12;

 FUNC_1(VAR_5);
 FUNC_1("cryptodev");

 VAR_10 = FUNC_5();

 for (VAR_12 = 0; VAR_12 < FUNC_7(VAR_3); VAR_12++) {
  const struct poly1305_kat *VAR_13;

  VAR_13 = &VAR_3[VAR_12];
  FUNC_8(VAR_13, VAR_8, VAR_9, VAR_7);

  VAR_11 = FUNC_2(VAR_10, VAR_0, VAR_4, VAR_8, sizeof(VAR_8));

  FUNC_4(VAR_10, VAR_11, VAR_9, VAR_13->test_msg_len, VAR_6);
  FUNC_0(FUNC_6(VAR_6, VAR_7, sizeof(VAR_7)), 0,
      "KAT %s failed:", VAR_13->vector_name);

  FUNC_3(VAR_10, VAR_11);
 }
}
