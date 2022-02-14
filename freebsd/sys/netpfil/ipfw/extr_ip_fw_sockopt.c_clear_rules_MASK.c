
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockopt_data {int valsize; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_8__ {int flags; int new_set; } ;
struct TYPE_6__ {TYPE_4__ range; } ;
typedef TYPE_1__ ipfw_range_header ;
struct TYPE_7__ {scalar_t__ opcode; } ;
typedef TYPE_2__ ip_fw3_opheader ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct ip_fw_chain*,TYPE_4__*,int) ;
 scalar_t__ FUNC_2 (struct sockopt_data*,int) ;
 int FUNC_3 (int,char*,char*) ;

__attribute__((used)) static int
FUNC_4(struct ip_fw_chain *VAR_6, ip_fw3_opheader *VAR_7,
    struct sockopt_data *VAR_8)
{
 ipfw_range_header *VAR_9;
 int VAR_10, VAR_11;
 char *VAR_12;

 if (VAR_8->valsize != sizeof(*VAR_9))
  return (VAR_0);

 VAR_9 = (ipfw_range_header *)FUNC_2(VAR_8, VAR_8->valsize);

 if (FUNC_0(&VAR_9->range) != 0)
  return (VAR_0);

 VAR_10 = (VAR_7->opcode == VAR_2);

 VAR_11 = FUNC_1(VAR_6, &VAR_9->range, VAR_10);

 if (VAR_9->range.flags & VAR_1)
  VAR_12 = VAR_10 ? "All logging counts reset" :
      "Accounting cleared";
 else
  VAR_12 = VAR_10 ? "logging count reset" : "cleared";

 if (VAR_5) {
  int VAR_13 = VAR_4 | VAR_3;
  FUNC_3(VAR_13, "ipfw: %s.\n", VAR_12);
 }


 VAR_9->range.new_set = VAR_11;
 return (0);
}
