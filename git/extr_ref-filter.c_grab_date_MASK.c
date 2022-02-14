
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct date_mode {int member_0; } ;
struct atom_value {scalar_t__ value; void* s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char const*,struct date_mode*) ;
 scalar_t__ FUNC_1 (char const*,char**,int) ;
 char* FUNC_2 (scalar_t__,long,struct date_mode*) ;
 char* FUNC_3 (char const*,char) ;
 char* FUNC_4 (char const*,char*) ;
 long FUNC_5 (char*,int *,int) ;
 void* FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(const char *VAR_6, struct atom_value *VAR_7, const char *VAR_8)
{
 const char *VAR_9 = FUNC_4(VAR_6, "> ");
 char *VAR_10;
 timestamp_t VAR_11;
 long VAR_12;
 struct date_mode VAR_13 = { VAR_0 };
 const char *VAR_14;







 VAR_14 = FUNC_3(VAR_8, ':');
 if (VAR_14 != ((void*)0)) {
  VAR_14++;
  FUNC_0(VAR_14, &VAR_13);
 }

 if (!VAR_9)
  goto bad;
 VAR_11 = FUNC_1(VAR_9 + 2, &VAR_10, 10);
 if (VAR_11 == VAR_4)
  goto bad;
 VAR_12 = FUNC_5(VAR_10, ((void*)0), 10);
 if ((VAR_12 == VAR_3 || VAR_12 == VAR_2) && VAR_5 == VAR_1)
  goto bad;
 VAR_7->s = FUNC_6(FUNC_2(VAR_11, VAR_12, &VAR_13));
 VAR_7->value = VAR_11;
 return;
 bad:
 VAR_7->s = FUNC_6("");
 VAR_7->value = 0;
}
