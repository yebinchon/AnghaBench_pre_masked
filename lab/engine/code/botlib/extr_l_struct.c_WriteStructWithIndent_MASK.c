
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; TYPE_2__* fields; } ;
typedef TYPE_1__ structdef_t ;
struct TYPE_5__ {char* name; int offset; int type; int maxarray; TYPE_1__* substruct; } ;
typedef TYPE_2__ fielddef_t ;
typedef int FILE ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,float) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_3(FILE *VAR_5, structdef_t *VAR_6, char *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10;
 void *VAR_11;
 fielddef_t *VAR_12;

 if (!FUNC_1(VAR_5, VAR_8)) return VAR_3;
 if (FUNC_2(VAR_5, "{\r\n") < 0) return VAR_3;

 VAR_8++;
 for (VAR_9 = 0; VAR_6->fields[VAR_9].name; VAR_9++)
 {
  VAR_12 = &VAR_6->fields[VAR_9];
  if (!FUNC_1(VAR_5, VAR_8)) return VAR_3;
  if (FUNC_2(VAR_5, "%s\t", VAR_12->name) < 0) return VAR_3;
  VAR_11 = (void *)(VAR_7 + VAR_12->offset);
  if (VAR_12->type & VAR_0)
  {
   VAR_10 = VAR_12->maxarray;
   if (FUNC_2(VAR_5, "{") < 0) return VAR_3;
  }
  else
  {
   VAR_10 = 1;
  }
  while(VAR_10-- > 0)
  {
   switch(VAR_12->type & VAR_1)
   {
    case 132:
    {
     if (FUNC_2(VAR_5, "%d", *(char *) VAR_11) < 0) return VAR_3;
     VAR_11 = (char *) VAR_11 + sizeof(char);
     break;
    }
    case 130:
    {
     if (FUNC_2(VAR_5, "%d", *(int *) VAR_11) < 0) return VAR_3;
     VAR_11 = (char *) VAR_11 + sizeof(int);
     break;
    }
    case 131:
    {
     if (!FUNC_0(VAR_5, *(float *)VAR_11)) return VAR_3;
     VAR_11 = (char *) VAR_11 + sizeof(float);
     break;
    }
    case 129:
    {
     if (FUNC_2(VAR_5, "\"%s\"", (char *) VAR_11) < 0) return VAR_3;
     VAR_11 = (char *) VAR_11 + VAR_2;
     break;
    }
    case 128:
    {
     if (!FUNC_3(VAR_5, VAR_12->substruct, VAR_7, VAR_8)) return VAR_3;
     VAR_11 = (char *) VAR_11 + VAR_12->substruct->size;
     break;
    }
   }
   if (VAR_12->type & VAR_0)
   {
    if (VAR_10 > 0)
    {
     if (FUNC_2(VAR_5, ",") < 0) return VAR_3;
    }
    else
    {
     if (FUNC_2(VAR_5, "}") < 0) return VAR_3;
    }
   }
  }
  if (FUNC_2(VAR_5, "\r\n") < 0) return VAR_3;
 }
 VAR_8--;

 if (!FUNC_1(VAR_5, VAR_8)) return VAR_3;
 if (FUNC_2(VAR_5, "}\r\n") < 0) return VAR_3;
 return VAR_4;
}
