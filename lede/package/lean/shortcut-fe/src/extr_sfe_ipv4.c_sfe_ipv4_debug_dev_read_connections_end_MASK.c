
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfe_ipv4_debug_xml_write_state {int state; } ;
struct sfe_ipv4 {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,int ,char*) ;

__attribute__((used)) static bool FUNC_2(struct sfe_ipv4 *VAR_1, char *VAR_2, char *VAR_3, size_t *VAR_4,
          int *VAR_5, struct sfe_ipv4_debug_xml_write_state *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_0, "\t</connections>\n");
 if (FUNC_0(VAR_2 + *VAR_5, VAR_3, VAR_0)) {
  return 0;
 }

 *VAR_4 -= VAR_7;
 *VAR_5 += VAR_7;

 VAR_6->state++;
 return 1;
}
