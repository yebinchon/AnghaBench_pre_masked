
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct parsed_resp {int num; struct opal_resp_tok* toks; } ;
struct opal_resp_tok {int dummy; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int length; } ;
struct TYPE_4__ {int length; } ;
struct opal_header {TYPE_3__ subpkt; TYPE_2__ pkt; TYPE_1__ cp; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const VAR_3 ;
 scalar_t__ const VAR_4 ;
 scalar_t__ const VAR_5 ;
 scalar_t__ const VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__ const*,int) ;
 scalar_t__ FUNC_3 (struct opal_resp_tok*,scalar_t__ const*) ;
 scalar_t__ FUNC_4 (struct opal_resp_tok*,scalar_t__ const*) ;
 scalar_t__ FUNC_5 (struct opal_resp_tok*,scalar_t__ const*) ;
 scalar_t__ FUNC_6 (struct opal_resp_tok*,scalar_t__ const*) ;
 scalar_t__ FUNC_7 (struct opal_resp_tok*,scalar_t__ const*) ;

__attribute__((used)) static int FUNC_8(const u8 *VAR_7, size_t VAR_8,
     struct parsed_resp *VAR_9)
{
 const struct opal_header *VAR_10;
 struct opal_resp_tok *VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 ssize_t VAR_14;
 const u8 *VAR_15;
 u32 VAR_16, VAR_17, VAR_18;

 if (!VAR_7)
  return -VAR_0;

 if (!VAR_9)
  return -VAR_0;

 VAR_10 = (struct opal_header *)VAR_7;
 VAR_15 = VAR_7;
 VAR_15 += sizeof(*VAR_10);

 VAR_16 = FUNC_0(VAR_10->cp.length);
 VAR_17 = FUNC_0(VAR_10->pkt.length);
 VAR_18 = FUNC_0(VAR_10->subpkt.length);
 FUNC_1("Response size: cp: %u, pkt: %u, subpkt: %u\n",
   VAR_16, VAR_17, VAR_18);

 if (VAR_16 == 0 || VAR_17 == 0 || VAR_18 == 0 ||
     VAR_18 > VAR_2 - sizeof(*VAR_10)) {
  FUNC_1("Bad header length. cp: %u, pkt: %u, subpkt: %u\n",
    VAR_16, VAR_17, VAR_18);
  FUNC_2(VAR_15, sizeof(*VAR_10));
  return -VAR_1;
 }

 if (VAR_15 > VAR_7 + VAR_8)
  return -VAR_0;

 VAR_11 = VAR_9->toks;
 VAR_13 = VAR_18;
 FUNC_2(VAR_15, VAR_13);
 while (VAR_13 > 0) {
  if (VAR_15[0] <= VAR_6)
   VAR_14 = FUNC_6(VAR_11, VAR_15);
  else if (VAR_15[0] <= VAR_5)
   VAR_14 = FUNC_5(VAR_11, VAR_15);
  else if (VAR_15[0] <= VAR_4)
   VAR_14 = FUNC_4(VAR_11, VAR_15);
  else if (VAR_15[0] <= VAR_3)
   VAR_14 = FUNC_3(VAR_11, VAR_15);
  else
   VAR_14 = FUNC_7(VAR_11, VAR_15);

  if (VAR_14 < 0)
   return VAR_14;

  VAR_15 += VAR_14;
  VAR_13 -= VAR_14;
  VAR_11++;
  VAR_12++;
 }

 VAR_9->num = VAR_12;

 return 0;
}
