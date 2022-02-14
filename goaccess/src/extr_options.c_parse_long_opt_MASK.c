
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ color_idx; char const* html_custom_css; char const* html_custom_js; char const* html_prefs; char const* html_report_title; int json_pretty_print; int max_items; int no_color; int no_column_names; int no_csv_summary; int no_parsing_spinner; int no_progress; int no_tab_scroll; int no_html_last_updated; char const* addr; char const* fifo_in; char const* fifo_out; int daemonize; char const* origin; char const* pidfile; char const* port; int real_time_html; char const* sslcert; char const* sslkey; char const* ws_url; char const* invalid_requests_log; scalar_t__ output_format_idx; int code444_as_404; int client_err_to_unique_count; int anonymize_ip; int store_accumulated_time; int all_static_files; int crawlers_only; int date_spec_hr; int double_decode; scalar_t__ enable_panel_idx; int hour_spec_min; int ignore_crawlers; scalar_t__ ignore_panel_idx; scalar_t__ ignore_referer_idx; int no_ip_validation; scalar_t__ hide_referer_idx; scalar_t__ ignore_status_idx; int num_tests; int process_and_exit; int real_os; scalar_t__ sort_panel_idx; scalar_t__ static_file_idx; scalar_t__ static_file_max_len; char const* geoip_database; int keep_db_files; int load_from_disk; char const* db_path; int compression; void* xmmap; void* tune_lmemb; void* tune_nmemb; void* tune_bnum; void* cache_ncnum; void* cache_lcnum; int static_files; int sort_panels; int ignore_statics; int ignore_status; int hide_referers; int ignore_referers; int ignore_panels; int enable_panels; int output_formats; void* color_scheme; int colors; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 void* FUNC_1 (char const*) ;
 TYPE_1__ VAR_12 ;
 int FUNC_2 () ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,int ,scalar_t__*,scalar_t__) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,char const*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int FUNC_11 (char const*,char**,int) ;

__attribute__((used)) static void
FUNC_12 (const char *VAR_14, const char *VAR_15)
{
  if (!FUNC_9 ("no-global-config", VAR_14))
    return;




  if (!FUNC_9 ("log-format", VAR_14))
    FUNC_7 (VAR_15);


  if (!FUNC_9 ("time-format", VAR_14))
    FUNC_8 (VAR_15);


  if (!FUNC_9 ("date-format", VAR_14))
    FUNC_6 (VAR_15);




  if (!FUNC_9 ("color", VAR_14))
    FUNC_5 (VAR_15, VAR_12.colors, &VAR_12.color_idx, VAR_4);


  if (!FUNC_9 ("color-scheme", VAR_14))
    VAR_12.color_scheme = FUNC_1 (VAR_15);


  if (!FUNC_9 ("html-custom-css", VAR_14))
    VAR_12.html_custom_css = VAR_15;


  if (!FUNC_9 ("html-custom-js", VAR_14))
    VAR_12.html_custom_js = VAR_15;


  if (!FUNC_9 ("html-prefs", VAR_14))
    VAR_12.html_prefs = VAR_15;


  if (!FUNC_9 ("html-report-title", VAR_14))
    VAR_12.html_report_title = VAR_15;


  if (!FUNC_9 ("json-pretty-print", VAR_14))
    VAR_12.json_pretty_print = 1;


  if (!FUNC_9 ("max-items", VAR_14)) {
    char *VAR_16;
    int VAR_17 = FUNC_11 (VAR_15, &VAR_16, 10);
    if (VAR_15 == VAR_16 || *VAR_16 != '\0' || VAR_13 == VAR_0)
      VAR_12.max_items = 1;
    else
      VAR_12.max_items = VAR_17;
  }


  if (!FUNC_9 ("no-color", VAR_14))
    VAR_12.no_color = 1;


  if (!FUNC_9 ("no-column-names", VAR_14))
    VAR_12.no_column_names = 1;


  if (!FUNC_9 ("no-csv-summary", VAR_14))
    VAR_12.no_csv_summary = 1;


  if (!FUNC_9 ("no-parsing-spinner", VAR_14))
    VAR_12.no_parsing_spinner = 1;


  if (!FUNC_9 ("no-progress", VAR_14))
    VAR_12.no_progress = 1;


  if (!FUNC_9 ("no-tab-scroll", VAR_14))
    VAR_12.no_tab_scroll = 1;


  if (!FUNC_9 ("no-html-last-updated", VAR_14))
    VAR_12.no_html_last_updated = 1;




  if (!FUNC_9 ("addr", VAR_14))
    VAR_12.addr = VAR_15;


  if (!FUNC_9 ("fifo-in", VAR_14))
    VAR_12.fifo_in = VAR_15;


  if (!FUNC_9 ("fifo-out", VAR_14))
    VAR_12.fifo_out = VAR_15;


  if (!FUNC_9 ("daemonize", VAR_14))
    VAR_12.daemonize = 1;


  if (!FUNC_9 ("origin", VAR_14))
    VAR_12.origin = VAR_15;


  if (!FUNC_9 ("pid-file", VAR_14))
    VAR_12.pidfile = VAR_15;


  if (!FUNC_9 ("port", VAR_14)) {
    int VAR_18 = FUNC_11 (VAR_15, ((void*)0), 10);
    if (VAR_18 < 0 || VAR_18 > 65535)
      FUNC_0 (("Invalid port."));
    else
      VAR_12.port = VAR_15;
  }


  if (!FUNC_9 ("real-time-html", VAR_14))
    VAR_12.real_time_html = 1;


  if (!FUNC_9 ("ssl-cert", VAR_14))
    VAR_12.sslcert = VAR_15;


  if (!FUNC_9 ("ssl-key", VAR_14))
    VAR_12.sslkey = VAR_15;


  if (!FUNC_9 ("ws-url", VAR_14))
    VAR_12.ws_url = VAR_15;




  if (!FUNC_9 ("invalid-requests", VAR_14)) {
    VAR_12.invalid_requests_log = VAR_15;
    FUNC_4 (VAR_12.invalid_requests_log);
  }


  if (!FUNC_9 ("output", VAR_14))
    FUNC_5 (VAR_15, VAR_12.output_formats, &VAR_12.output_format_idx,
                   VAR_8);




  if (!FUNC_9 ("444-as-404", VAR_14))
    VAR_12.code444_as_404 = 1;


  if (!FUNC_9 ("4xx-to-unique-count", VAR_14))
    VAR_12.client_err_to_unique_count = 1;


  if (!FUNC_9 ("anonymize-ip", VAR_14))
    VAR_12.anonymize_ip = 1;


  if (!FUNC_9 ("accumulated-time", VAR_14))
    VAR_12.store_accumulated_time = 1;


  if (!FUNC_9 ("all-static-files", VAR_14))
    VAR_12.all_static_files = 1;


  if (!FUNC_9 ("crawlers-only", VAR_14))
    VAR_12.crawlers_only = 1;


  if (!FUNC_9 ("date-spec", VAR_14) && !FUNC_9 (VAR_15, "hr"))
    VAR_12.date_spec_hr = 1;


  if (!FUNC_9 ("double-decode", VAR_14))
    VAR_12.double_decode = 1;


  if (!FUNC_9 ("enable-panel", VAR_14))
    FUNC_5 (VAR_15, VAR_12.enable_panels, &VAR_12.enable_panel_idx,
                   VAR_11);


  if (!FUNC_9 ("hour-spec", VAR_14) && !FUNC_9 (VAR_15, "min"))
    VAR_12.hour_spec_min = 1;


  if (!FUNC_9 ("ignore-crawlers", VAR_14))
    VAR_12.ignore_crawlers = 1;


  if (!FUNC_9 ("ignore-panel", VAR_14))
    FUNC_5 (VAR_15, VAR_12.ignore_panels, &VAR_12.ignore_panel_idx,
                   VAR_11);


  if (!FUNC_9 ("ignore-referer", VAR_14))
    FUNC_5 (VAR_15, VAR_12.ignore_referers, &VAR_12.ignore_referer_idx,
                   VAR_6);


  if (!FUNC_9 ("no-ip-validation", VAR_14))
    VAR_12.no_ip_validation = 1;


  if (!FUNC_9 ("hide-referer", VAR_14))
    FUNC_5 (VAR_15, VAR_12.hide_referers, &VAR_12.hide_referer_idx,
                   VAR_6);


  if (!FUNC_9 ("ignore-status", VAR_14))
    FUNC_5 (VAR_15, VAR_12.ignore_status, &VAR_12.ignore_status_idx,
                   VAR_7);


  if (!FUNC_9 ("ignore-statics", VAR_14)) {
    if (!FUNC_9 ("req", VAR_15))
      VAR_12.ignore_statics = VAR_3;
    else if (!FUNC_9 ("panel", VAR_15))
      VAR_12.ignore_statics = VAR_2;
    else
      FUNC_0 (("Invalid statics ignore option."));
  }


  if (!FUNC_9 ("num-tests", VAR_14)) {
    char *VAR_19;
    int VAR_20 = FUNC_11 (VAR_15, &VAR_19, 10);
    if (VAR_15 == VAR_19 || *VAR_19 != '\0' || VAR_13 == VAR_0)
      return;
    VAR_12.num_tests = VAR_20 >= 0 ? VAR_20 : 0;
  }


  if (!FUNC_9 ("process-and-exit", VAR_14))
    VAR_12.process_and_exit = 1;


  if (!FUNC_9 ("real-os", VAR_14))
    VAR_12.real_os = 1;


  if (!FUNC_9 ("sort-panel", VAR_14))
    FUNC_5 (VAR_15, VAR_12.sort_panels, &VAR_12.sort_panel_idx, VAR_11);


  if (!FUNC_9 ("static-file", VAR_14) && VAR_12.static_file_idx < VAR_5) {
    if (VAR_12.static_file_max_len < FUNC_10 (VAR_15))
      VAR_12.static_file_max_len = FUNC_10 (VAR_15);
    FUNC_5 (VAR_15, VAR_12.static_files, &VAR_12.static_file_idx,
                   VAR_5);
  }




  if (!FUNC_9 ("geoip-city-data", VAR_14) || !FUNC_9 ("geoip-database", VAR_14))
    VAR_12.geoip_database = VAR_15;




  if (!FUNC_9 ("keep-db-files", VAR_14))
    VAR_12.keep_db_files = 1;


  if (!FUNC_9 ("load-from-disk", VAR_14))
    VAR_12.load_from_disk = 1;


  if (!FUNC_9 ("db-path", VAR_14))
    VAR_12.db_path = VAR_15;


  if (!FUNC_9 ("cache-lcnum", VAR_14))
    VAR_12.cache_lcnum = FUNC_1 (VAR_15);


  if (!FUNC_9 ("cache-ncnum", VAR_14))
    VAR_12.cache_ncnum = FUNC_1 (VAR_15);


  if (!FUNC_9 ("tune-bnum", VAR_14))
    VAR_12.tune_bnum = FUNC_1 (VAR_15);


  if (!FUNC_9 ("tune-nmemb", VAR_14))
    VAR_12.tune_nmemb = FUNC_1 (VAR_15);


  if (!FUNC_9 ("tune-lmemb", VAR_14))
    VAR_12.tune_lmemb = FUNC_1 (VAR_15);


  if (!FUNC_9 ("xmmap", VAR_14))
    VAR_12.xmmap = FUNC_1 (VAR_15);


  if (!FUNC_9 ("compression", VAR_14)) {
  }


  if (!FUNC_9 ("dcf", VAR_14)) {
    FUNC_2 ();
    FUNC_3 (VAR_1);
  }
}
