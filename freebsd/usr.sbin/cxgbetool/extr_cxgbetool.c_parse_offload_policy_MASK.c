
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t4_offload_policy {int nrules; struct offload_rule* rule; } ;
struct offload_rule {int dummy; } ;
typedef int pcap_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct t4_offload_policy*) ;
 size_t FUNC_5 (char**,size_t*,int *) ;
 scalar_t__ FUNC_6 (char*,size_t) ;
 int FUNC_7 (int,char*,size_t,int *,struct offload_rule*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int) ;
 struct offload_rule* FUNC_10 (struct offload_rule*,int) ;
 int FUNC_11 (char*,char const*,...) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static int
FUNC_13(const char *VAR_6, struct t4_offload_policy *VAR_7)
{
 FILE *VAR_8;
 char *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 size_t VAR_13, VAR_14;
 struct offload_rule *VAR_15;
 pcap_t *VAR_16;

 VAR_8 = FUNC_2(VAR_6, "r");
 if (VAR_8 == ((void*)0)) {
  FUNC_11("Unable to open file \"%s\"", VAR_6);
  return (VAR_5);
 }
 VAR_16 = FUNC_9(VAR_0, 128);
 if (VAR_16 == ((void*)0)) {
  FUNC_12("Failed to open pcap device");
  FUNC_0(VAR_8);
  return (VAR_2);
 }

 VAR_12 = 0;
 VAR_10 = 0;
 VAR_13 = 0;
 VAR_11 = 0;
 VAR_7->nrules = 0;
 VAR_7->rule = ((void*)0);
 VAR_9 = ((void*)0);

 while ((VAR_14 = FUNC_5(&VAR_9, &VAR_13, VAR_8)) != -1) {
  VAR_10++;


  if (FUNC_6(VAR_9, VAR_14))
   continue;

  if (VAR_7->nrules == VAR_11) {
   VAR_11 += VAR_4;
   VAR_15 = FUNC_10(VAR_7->rule,
       VAR_11 * sizeof(struct offload_rule));
   if (VAR_15 == ((void*)0)) {
    FUNC_12("failed to allocate memory for %d rules",
        VAR_11);
    VAR_12 = VAR_3;
    goto done;
   }
   VAR_7->rule = VAR_15;
  }

  VAR_15 = &VAR_7->rule[VAR_7->nrules];
  VAR_12 = FUNC_7(VAR_10, VAR_9, VAR_14, VAR_16, VAR_15);
  if (VAR_12 != 0) {
   FUNC_12("Error parsing line %d of \"%s\"", VAR_10, VAR_6);
   goto done;
  }

  VAR_7->nrules++;
 }
 FUNC_3(VAR_9);

 if (!FUNC_1(VAR_8)) {
  FUNC_11("Error while reading from file \"%s\" at line %d",
      VAR_6, VAR_10);
  VAR_12 = VAR_5;
  goto done;
 }

 if (VAR_7->nrules == 0) {
  FUNC_12("No valid rules found in \"%s\"", VAR_6);
  VAR_12 = VAR_1;
 }
done:
 FUNC_8(VAR_16);
 FUNC_0(VAR_8);
 if (VAR_12 != 0) {
  FUNC_4(VAR_7);
 }

 return (VAR_12);
}
