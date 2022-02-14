
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int set; int etlv; int name; } ;
struct nptv6_cfg {int name; TYPE_1__ no; int stats; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nptv6_cfg* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static struct nptv6_cfg *
FUNC_3(const char *VAR_5, uint8_t VAR_6)
{
 struct nptv6_cfg *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct nptv6_cfg), VAR_1, VAR_2 | VAR_3);
 FUNC_0(VAR_7->stats, VAR_4, VAR_2);
 VAR_7->no.name = VAR_7->name;
 VAR_7->no.etlv = VAR_0;
 VAR_7->no.set = VAR_6;
 FUNC_2(VAR_7->name, VAR_5, sizeof(VAR_7->name));
 return (VAR_7);
}
