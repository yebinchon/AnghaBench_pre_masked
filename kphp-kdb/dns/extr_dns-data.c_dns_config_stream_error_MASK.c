
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* filename; int line; char* buff; int errors; } ;
typedef TYPE_1__ dns_config_stream_t ;


 int FUNC_0 (int ,char*,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1 (dns_config_stream_t *VAR_1, const char *VAR_2) {
  FUNC_0 (VAR_0, "File: %s, Line: %d, Function: %s\n", VAR_1->filename, VAR_1->line, VAR_2);
  FUNC_0 (VAR_0, "%s\n", VAR_1->buff);
  VAR_1->errors++;
}
