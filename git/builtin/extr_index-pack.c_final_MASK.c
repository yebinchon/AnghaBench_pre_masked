
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct packed_git {int dummy; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 struct packed_git* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (char const*,char const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int ,char const*) ;
 char* FUNC_8 (unsigned char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int ,struct packed_git*) ;
 char* FUNC_10 (struct strbuf*,unsigned char*,char*) ;
 int VAR_7 ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (struct strbuf*,char*,char const*,char*) ;
 int FUNC_13 (struct strbuf*) ;
 int FUNC_14 (char const*) ;
 int VAR_8 ;
 int FUNC_15 (int,int ,int ) ;
 int FUNC_16 (char*,char const*,char const*,unsigned char*,char const**) ;
 int FUNC_17 (int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_18(const char *VAR_9, const char *VAR_10,
    const char *VAR_11, const char *VAR_12,
    const char *VAR_13, const char *VAR_14,
    unsigned char *VAR_15)
{
 const char *VAR_16 = "pack";
 struct strbuf VAR_17 = VAR_0;
 struct strbuf VAR_18 = VAR_0;
 int VAR_19;

 if (!VAR_2) {
  FUNC_3(VAR_4);
 } else {
  FUNC_7(VAR_7, VAR_10);
  VAR_19 = FUNC_3(VAR_7);
  if (VAR_19)
   FUNC_5(FUNC_0("error while closing pack file"));
 }

 if (VAR_13)
  FUNC_16("keep", VAR_13, VAR_9, VAR_15,
       &VAR_16);
 if (VAR_14)
  FUNC_16("promisor", VAR_14, VAR_9,
       VAR_15, ((void*)0));

 if (VAR_9 != VAR_10) {
  if (!VAR_9)
   VAR_9 = FUNC_10(&VAR_17, VAR_15, "pack");
  if (FUNC_6(VAR_10, VAR_9))
   FUNC_4(FUNC_0("cannot store pack file"));
 } else if (VAR_2)
  FUNC_2(VAR_9, 0444);

 if (VAR_11 != VAR_12) {
  if (!VAR_11)
   VAR_11 = FUNC_10(&VAR_18, VAR_15, "idx");
  if (FUNC_6(VAR_12, VAR_11))
   FUNC_4(FUNC_0("cannot store index file"));
 } else
  FUNC_2(VAR_11, 0444);

 if (VAR_1) {
  struct packed_git *VAR_20;
  VAR_20 = FUNC_1(VAR_11, FUNC_14(VAR_11), 0);
  if (VAR_20)
   FUNC_9(VAR_8, VAR_20);
 }

 if (!VAR_2) {
  FUNC_11("%s\n", FUNC_8(VAR_15));
 } else {
  struct strbuf VAR_21 = VAR_0;

  FUNC_12(&VAR_21, "%s\t%s\n", VAR_16, FUNC_8(VAR_15));
  FUNC_15(1, VAR_21.buf, VAR_21.len);
  FUNC_13(&VAR_21);





  while (VAR_5) {
   VAR_19 = FUNC_17(1, VAR_3 + VAR_6, VAR_5);
   if (VAR_19 <= 0)
    break;
   VAR_5 -= VAR_19;
   VAR_6 += VAR_19;
  }
 }

 FUNC_13(&VAR_18);
 FUNC_13(&VAR_17);
}
