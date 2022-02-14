
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct dumpreg {scalar_t__ addr; } ;
struct ath_diag {char* ad_name; int ad_out_size; scalar_t__ ad_out_data; int ad_id; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_2__ {int revs; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,char*,char*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 scalar_t__ FUNC_4 (int,int ,struct ath_diag*) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*,char*,int) ;
 struct dumpreg* FUNC_6 (char*) ;
 int FUNC_7 (int,struct ath_diag*,scalar_t__) ;
 int FUNC_8 (int,struct ath_diag*,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ,int ,int ) ;
 TYPE_1__ VAR_8 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*,char const*,int) ;
 scalar_t__ FUNC_12 (char*,char**,int ) ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_9, char *VAR_10[])
{
 struct ath_diag VAR_11;
 const char *VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15;

 VAR_15 = FUNC_9(VAR_0, VAR_4, 0);
 if (VAR_15 < 0)
  FUNC_0(1, "socket");
 VAR_12 = FUNC_2("ATH");
 if (!VAR_12)
  VAR_12 = VAR_1;

 while ((VAR_14 = FUNC_3(VAR_9, VAR_10, "i:")) != -1)
  switch (VAR_14) {
  case 'i':
   VAR_12 = VAR_6;
   break;
  default:
   FUNC_13();

  }
 FUNC_11(VAR_11.ad_name, VAR_12, sizeof (VAR_11.ad_name));

 VAR_11.ad_id = VAR_2;
 VAR_11.ad_out_data = (caddr_t) &VAR_8.revs;
 VAR_11.ad_out_size = sizeof(VAR_8.revs);
 if (FUNC_4(VAR_15, VAR_3, &VAR_11) < 0)
  FUNC_0(1, VAR_11.ad_name);

 VAR_9 -= VAR_7;
 VAR_10 += VAR_7;

 for (; VAR_9 > 0; VAR_9--, VAR_10++) {
  char *VAR_16;
  const struct dumpreg *VAR_17;
  uint32_t VAR_18;

  VAR_16 = FUNC_10(VAR_10[0], '=');
  if (VAR_16 != ((void*)0))
   *VAR_16++ = '\0';
  VAR_17 = FUNC_6(VAR_10[0]);
  if (VAR_17 == ((void*)0)) {
   VAR_5 = 0;
   VAR_18 = (uint32_t) FUNC_12(VAR_10[0], &VAR_13, 0);
   if (VAR_10[0] == VAR_13 || VAR_13[0] != '\0')
    FUNC_1(1, "invalid register \"%s\"", VAR_10[0]);
  } else
   VAR_18 = VAR_17->addr;
  if (VAR_16 != ((void*)0))
   FUNC_8(VAR_15, &VAR_11, VAR_18, (uint32_t) FUNC_12(VAR_16, ((void*)0), 0));
  FUNC_5("%s = %08x\n", VAR_10[0], FUNC_7(VAR_15, &VAR_11, VAR_18));
 }
 return 0;
}
