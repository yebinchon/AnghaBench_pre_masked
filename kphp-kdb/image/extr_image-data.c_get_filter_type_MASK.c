
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FilterTypes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static FilterTypes FUNC_1 (const char* VAR_14) {
  switch (*VAR_14++) {
  case 'b':
    if (!FUNC_0 ("ox", VAR_14)) {
      return VAR_1;
    }
    if (!FUNC_0 ("lackman", VAR_14)) {
      return VAR_0;
    }
    if (!FUNC_0 ("essel", VAR_14)) {
      return VAR_0;
    }
    break;
  case 'c':
    if (!FUNC_0 ("ubic", VAR_14)) {
      return VAR_3;
    }
    if (!FUNC_0 ("atrom", VAR_14)) {
      return VAR_2;
    }
    break;
  case 'g':
    if (!FUNC_0 ("aussian", VAR_14)) {
      return VAR_4;
    }
    break;
  case 'h':
    if (!FUNC_0 ("ermite", VAR_14)) {
      return VAR_6;
    }
    if (!FUNC_0 ("anning", VAR_14)) {
      return VAR_5;
    }
    break;
  case 'l':
    if (!FUNC_0 ("anczos", VAR_14)) {
      return VAR_7;
    }
    break;
  case 'm':
    if (!FUNC_0 ("itchell", VAR_14)) {
      return VAR_8;
    }
    break;
  case 'p':
    if (!FUNC_0 ("oint", VAR_14)) {
      return VAR_9;
    }
    break;
  case 'q':
    if (!FUNC_0 ("uadratic", VAR_14)) {
      return VAR_10;
    }
    break;
  case 's':
    if (!FUNC_0 ("inc", VAR_14)) {
      return VAR_11;
    }
    break;
  case 't':
    if (!FUNC_0 ("riangle", VAR_14)) {
      return VAR_12;
    }
    break;
  }
  return VAR_13;
}
