
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int set; int etlv; int name; } ;
struct TYPE_4__ {int cnt; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
struct nat64clat_cfg {int name; TYPE_3__ no; TYPE_2__ base; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nat64clat_cfg* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static struct nat64clat_cfg *
FUNC_3(const char *VAR_5, uint8_t VAR_6)
{
 struct nat64clat_cfg *VAR_7;

 VAR_7 = FUNC_1(sizeof(struct nat64clat_cfg), VAR_1, VAR_2 | VAR_3);
 FUNC_0(VAR_7->base.stats.cnt, VAR_4, VAR_2);
 VAR_7->no.name = VAR_7->name;
 VAR_7->no.etlv = VAR_0;
 VAR_7->no.set = VAR_6;
 FUNC_2(VAR_7->name, VAR_5, sizeof(VAR_7->name));
 return (VAR_7);
}
