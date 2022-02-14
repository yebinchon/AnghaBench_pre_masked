
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ip_fw_chain {int n_rules; int static_len; struct ip_fw** map; } ;
struct ip_fw {int dummy; } ;
struct TYPE_5__ {int flags; scalar_t__ end_rule; scalar_t__ start_rule; } ;
typedef TYPE_1__ ipfw_range_tlv ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct ip_fw*) ;
 int VAR_5 ;
 int FUNC_3 (struct ip_fw**,struct ip_fw**,int) ;
 int FUNC_4 (struct ip_fw**,int ) ;
 struct ip_fw** FUNC_5 (struct ip_fw_chain*,int ,int) ;
 int FUNC_6 (struct ip_fw_chain*,TYPE_1__*) ;
 int FUNC_7 (struct ip_fw_chain*,scalar_t__,int ) ;
 scalar_t__ FUNC_8 (struct ip_fw*) ;
 scalar_t__ FUNC_9 (struct ip_fw*,TYPE_1__*) ;
 int FUNC_10 (struct ip_fw_chain*,struct ip_fw**,struct ip_fw*) ;
 int FUNC_11 (struct ip_fw*) ;
 struct ip_fw** FUNC_12 (struct ip_fw_chain*,struct ip_fw**,int) ;
 int FUNC_13 (struct ip_fw_chain*,struct ip_fw**) ;

__attribute__((used)) static int
FUNC_14(struct ip_fw_chain *VAR_6, ipfw_range_tlv *VAR_7, int *VAR_8)
{
 struct ip_fw *VAR_9, *VAR_10, **VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 VAR_9 = ((void*)0);
 FUNC_0(VAR_6);





 VAR_13 = 0;
 VAR_12 = VAR_6->n_rules - 1;

 if ((VAR_7->flags & VAR_3) != 0) {
  VAR_13 = FUNC_7(VAR_6, VAR_7->start_rule, 0);

  if (VAR_7->end_rule >= VAR_1)
   VAR_7->end_rule = VAR_1 - 1;
  VAR_12 = FUNC_7(VAR_6, VAR_7->end_rule, VAR_5);
 }

 if (VAR_7->flags & VAR_2) {



  *VAR_8 = 0;
  FUNC_6(VAR_6, VAR_7);
  FUNC_1(VAR_6);
  return (0);
 }


 VAR_11 = FUNC_5(VAR_6, 0, 1 );
 if (VAR_11 == ((void*)0)) {
  FUNC_1(VAR_6);
  return (VAR_0);
 }

 VAR_15 = 0;
 VAR_16 = 0;
 VAR_17 = VAR_13;

 if (VAR_13 > 0)
  FUNC_3(VAR_6->map, VAR_11, VAR_13 * sizeof(struct ip_fw *));

 for (VAR_14 = VAR_13; VAR_14 < VAR_12; VAR_14++) {
  VAR_10 = VAR_6->map[VAR_14];
  if (FUNC_9(VAR_10, VAR_7) == 0) {
   VAR_11[VAR_17++] = VAR_10;
   continue;
  }

  VAR_15++;
  if (FUNC_8(VAR_10) != 0)
   VAR_16++;
 }

 FUNC_3(VAR_6->map + VAR_12, VAR_11 + VAR_17,
  (VAR_6->n_rules - VAR_12) * sizeof(struct ip_fw *));

 FUNC_13(VAR_6, VAR_11);

 VAR_11 = FUNC_12(VAR_6, VAR_11, VAR_6->n_rules - VAR_15);

 if (VAR_16 > 0)
  FUNC_6(VAR_6, VAR_7);

 for (VAR_14 = VAR_13; VAR_14 < VAR_12; VAR_14++) {
  VAR_10 = VAR_11[VAR_14];
  if (FUNC_9(VAR_10, VAR_7) == 0)
   continue;
  VAR_6->static_len -= FUNC_2(VAR_10);
  FUNC_10(VAR_6, &VAR_9, VAR_10);
 }
 FUNC_1(VAR_6);

 FUNC_11(VAR_9);
 if (VAR_11 != ((void*)0))
  FUNC_4(VAR_11, VAR_4);
 *VAR_8 = VAR_15;
 return (0);
}
