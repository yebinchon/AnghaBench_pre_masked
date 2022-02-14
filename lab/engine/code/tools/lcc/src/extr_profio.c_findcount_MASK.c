
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {char* name; int count; struct count* counts; } ;
struct count {int y; int x; int count; } ;


 struct file* FUNC_0 (char*) ;

int FUNC_1(char *VAR_0, int VAR_1, int VAR_2) {
 static struct file *VAR_3;

 if (VAR_3 == 0 || VAR_3->name != VAR_0)
  VAR_3 = FUNC_0(VAR_0);
 if (VAR_3) {
  int VAR_4, VAR_5;
  struct count *VAR_6 = VAR_3->counts;
  for (VAR_4 = 0, VAR_5 = VAR_3->count - 1; VAR_4 <= VAR_5; ) {
   int VAR_7 = (VAR_4 + VAR_5)/2;
   if (VAR_6[VAR_7].y > VAR_2 || (VAR_6[VAR_7].y == VAR_2 && VAR_6[VAR_7].x > VAR_1))
    VAR_5 = VAR_7 - 1;
   else if (VAR_6[VAR_7].y < VAR_2 || (VAR_6[VAR_7].y == VAR_2 && VAR_6[VAR_7].x < VAR_1))
    VAR_4 = VAR_7 + 1;
   else
    return VAR_6[VAR_7].count;
  }
 }
 return -1;
}
