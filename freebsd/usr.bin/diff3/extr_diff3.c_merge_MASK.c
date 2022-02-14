
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ to; scalar_t__ from; } ;
struct diff {TYPE_1__ new; TYPE_1__ old; } ;


 int FUNC_0 (int,TYPE_1__*,int) ;
 struct diff* VAR_0 ;
 struct diff* VAR_1 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (struct diff*,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(int VAR_3, int VAR_4)
{
 struct diff *VAR_5, *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 bool VAR_11 = 0;

 VAR_5 = VAR_0;
 VAR_6 = VAR_1;
 VAR_8 = 0;

 while ((VAR_9 = VAR_5 < VAR_0 + VAR_3) | (VAR_10 = VAR_6 < VAR_1 + VAR_4)) {

  if (!VAR_10 || (VAR_9 && VAR_5->new.to < VAR_6->new.from)) {

   if (VAR_2 == 0) {
    FUNC_5("====1\n");
    FUNC_0(1, &VAR_5->old, 0);
    FUNC_4(2, &VAR_5->new);
    FUNC_0(3, &VAR_5->new, 0);
   }
   VAR_5++;
   continue;
  }

  if (!VAR_9 || (VAR_10 && VAR_6->new.to < VAR_5->new.from)) {
   if (VAR_2 == 0) {
    FUNC_5("====2\n");
    FUNC_4(1, &VAR_6->new);
    FUNC_0(3, &VAR_6->new, 0);
    FUNC_0(2, &VAR_6->old, 0);
   }
   VAR_6++;
   continue;
  }




  if (VAR_5 + 1 < VAR_0 + VAR_3 && VAR_5->new.to >= VAR_5[1].new.from) {
   VAR_5[1].old.from = VAR_5->old.from;
   VAR_5[1].new.from = VAR_5->new.from;
   VAR_5++;
   continue;
  }


  if (VAR_6 + 1 < VAR_1 + VAR_4 && VAR_6->new.to >= VAR_6[1].new.from) {
   VAR_6[1].old.from = VAR_6->old.from;
   VAR_6[1].new.from = VAR_6->new.from;
   VAR_6++;
   continue;
  }

  if (VAR_5->new.from == VAR_6->new.from && VAR_5->new.to == VAR_6->new.to) {
   VAR_11 = FUNC_1(&VAR_5->old, &VAR_6->old);




   if (VAR_2 == 0) {
    FUNC_5("====%s\n", VAR_11 ? "3" : "");
    FUNC_0(1, &VAR_5->old, VAR_11);
    FUNC_0(2, &VAR_6->old, 0);
    VAR_7 = VAR_5->old.to > VAR_5->old.from ? VAR_5 : VAR_6;
    FUNC_0(3, &VAR_7->new, 0);
   } else
    VAR_8 = FUNC_2(VAR_5, VAR_11, VAR_8);
   VAR_5++;
   VAR_6++;
   continue;
  }




  if (VAR_5->new.from < VAR_6->new.from) {
   VAR_6->old.from -= VAR_6->new.from - VAR_5->new.from;
   VAR_6->new.from = VAR_5->new.from;
  } else if (VAR_6->new.from < VAR_5->new.from) {
   VAR_5->old.from -= VAR_5->new.from - VAR_6->new.from;
   VAR_5->new.from = VAR_6->new.from;
  }
  if (VAR_5->new.to > VAR_6->new.to) {
   VAR_6->old.to += VAR_5->new.to - VAR_6->new.to;
   VAR_6->new.to = VAR_5->new.to;
  } else if (VAR_6->new.to > VAR_5->new.to) {
   VAR_5->old.to += VAR_6->new.to - VAR_5->new.to;
   VAR_5->new.to = VAR_6->new.to;
  }
 }
 if (VAR_2)
  FUNC_3(VAR_8);
}
