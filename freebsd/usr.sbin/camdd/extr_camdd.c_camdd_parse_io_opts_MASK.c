
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camdd_io_opts {int write_dev; int min_cmd_size; void* debug; int offset; void* queue_depth; int blocksize; int * dev_name; int dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;
 char* FUNC_4 (char**,char*) ;
 int FUNC_5 (char*,char**,int ) ;
 void* FUNC_6 (char*,char**,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*,...) ;

int
FUNC_9(char *VAR_2, int VAR_3, struct camdd_io_opts *VAR_4)
{
 char *VAR_5, *VAR_6;
 char *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 VAR_4->write_dev = VAR_3;

 VAR_5 = FUNC_2(VAR_2);
 if (VAR_5 == ((void*)0)) {
  FUNC_7("strdup failed");
  VAR_8 = 1;
  goto bailout;
 }
 VAR_7 = VAR_5;
 while ((VAR_6 = FUNC_4(&VAR_5, ",")) != ((void*)0)) {
  char *VAR_9, *VAR_10;





  if (*VAR_6 == '\0')
   continue;

  VAR_9 = FUNC_4(&VAR_6, "=");
  if (*VAR_9 == '\0') {
   FUNC_8("Got empty I/O parameter name");
   VAR_8 = 1;
   goto bailout;
  }
  VAR_10 = FUNC_4(&VAR_6, "=");
  if ((VAR_10 == ((void*)0))
   || (*VAR_10 == '\0')) {
   FUNC_8("Empty I/O parameter value for %s", VAR_9);
   VAR_8 = 1;
   goto bailout;
  }
  if (FUNC_3(VAR_9, "file", 4) == 0) {
   VAR_4->dev_type = VAR_0;
   VAR_4->dev_name = FUNC_2(VAR_10);
   if (VAR_4->dev_name == ((void*)0)) {
    FUNC_7("Error allocating memory");
    VAR_8 = 1;
    goto bailout;
   }
  } else if (FUNC_3(VAR_9, "pass", 4) == 0) {
   VAR_4->dev_type = VAR_1;
   VAR_4->dev_name = FUNC_2(VAR_10);
   if (VAR_4->dev_name == ((void*)0)) {
    FUNC_7("Error allocating memory");
    VAR_8 = 1;
    goto bailout;
   }
  } else if ((FUNC_3(VAR_9, "bs", 2) == 0)
   || (FUNC_3(VAR_9, "blocksize", 9) == 0)) {
   VAR_8 = FUNC_0(VAR_10, &VAR_4->blocksize);
   if (VAR_8 == -1) {
    FUNC_7("expand_number(3) failed on %s=%s", VAR_9,
        VAR_10);
    VAR_8 = 1;
    goto bailout;
   }
  } else if (FUNC_3(VAR_9, "depth", 5) == 0) {
   char *VAR_11;

   VAR_4->queue_depth = FUNC_6(VAR_10, &VAR_11, 0);
   if (*VAR_11 != '\0') {
    FUNC_8("invalid queue depth %s", VAR_10);
    VAR_8 = 1;
    goto bailout;
   }
  } else if (FUNC_3(VAR_9, "mcs", 3) == 0) {
   char *VAR_12;

   VAR_4->min_cmd_size = FUNC_5(VAR_10, &VAR_12, 0);
   if ((*VAR_12 != '\0')
    || ((VAR_4->min_cmd_size > 16)
     || (VAR_4->min_cmd_size < 0))) {
    FUNC_8("invalid minimum cmd size %s", VAR_10);
    VAR_8 = 1;
    goto bailout;
   }
  } else if (FUNC_3(VAR_9, "offset", 6) == 0) {
   VAR_8 = FUNC_0(VAR_10, &VAR_4->offset);
   if (VAR_8 == -1) {
    FUNC_7("expand_number(3) failed on %s=%s", VAR_9,
        VAR_10);
    VAR_8 = 1;
    goto bailout;
   }
  } else if (FUNC_3(VAR_9, "debug", 5) == 0) {
   char *VAR_13;

   VAR_4->debug = FUNC_6(VAR_10, &VAR_13, 0);
   if (*VAR_13 != '\0') {
    FUNC_8("invalid debug level %s", VAR_10);
    VAR_8 = 1;
    goto bailout;
   }
  } else {
   FUNC_8("Unrecognized parameter %s=%s", VAR_9, VAR_10);
  }
 }
bailout:
 FUNC_1(VAR_7);

 return (VAR_8);
}
