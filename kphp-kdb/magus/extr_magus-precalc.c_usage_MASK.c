
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 char* VAR_0 ;

void FUNC_2 (void) {
  FUNC_1 ("usage: %s [-v] [-u<username>] -n<engineN> [-t<obj_type>] [-f<objs_limit>] [-h<hints_limit>] [-p<passes>]\n"
      "Preprocesses engineN binary files \"dump<server_num>.<obj_type>\" with information about user objects preferences\n"
      "  server_num is 3 digit number with leading zeros\n"
      "  write result to file similarity.<obj_type>\n"
      "\t-v\toutput statistical and debug information into stderr\n"
      "\t-t\ttype of objects, default is 41\n"
      "\t-a<dump_prefix>\tprefix of dumps from database\n"
      "\t-f\tnumber of significant objects, default is 1000, maximal is 1000000\n"
      "\t-h\tnumber of similar objects for each object, stored in similarity file, default equal to <objs_limit> and can't exceed it\n"
      "\t-p\tnumber of passes. More passes - less memory. Default is 1000\n"
      "\t-n\tnumber of hints engines, required\n",
      VAR_0);
  FUNC_0 (2);
}
